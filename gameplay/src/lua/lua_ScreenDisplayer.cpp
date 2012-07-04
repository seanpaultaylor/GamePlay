#include "Base.h"
#include "ScriptController.h"
#include "ScreenDisplayer.h"
#include "lua_ScreenDisplayer.h"
#include "lua_Global.h"

namespace gameplay
{

void luaRegister_ScreenDisplayer()
{
    ScriptController* sc = ScriptController::getInstance();

    const luaL_Reg lua_members[] = 
    {
        {NULL, NULL}
    };
    const luaL_Reg lua_statics[] = 
    {
        {"finish", lua_ScreenDisplayer_static_finish},
        {"start", lua_ScreenDisplayer_static_start},
        {NULL, NULL}
    };
    std::vector<std::string> scopePath;

    sc->registerClass("ScreenDisplayer", lua_members, lua_ScreenDisplayer__init, lua_ScreenDisplayer__gc, lua_statics, scopePath);
}

static ScreenDisplayer* getInstance(lua_State* state)
{
    void* userdata = luaL_checkudata(state, 1, "ScreenDisplayer");
    luaL_argcheck(state, userdata != NULL, 1, "'ScreenDisplayer' expected.");
    return (ScreenDisplayer*)((ScriptController::LuaObject*)userdata)->instance;
}

int lua_ScreenDisplayer__gc(lua_State* state)
{
    // Get the number of parameters.
    int paramCount = lua_gettop(state);

    // Attempt to match the parameters to a valid binding.
    switch (paramCount)
    {
        case 1:
        {
            if ((lua_type(state, 1) == LUA_TUSERDATA || lua_type(state, 1) == LUA_TNIL))
            {
                void* userdata = luaL_checkudata(state, 1, "ScreenDisplayer");
                luaL_argcheck(state, userdata != NULL, 1, "'ScreenDisplayer' expected.");
                ScriptController::LuaObject* object = (ScriptController::LuaObject*)userdata;
                if (object->owns)
                {
                    ScreenDisplayer* instance = (ScreenDisplayer*)object->instance;
                    SAFE_DELETE(instance);
                }
                
                return 0;
            }
            else
            {
                lua_pushstring(state, "Failed to match the given parameters to a valid function signature.");
                lua_error(state);
            }
            break;
        }
        default:
        {
            lua_pushstring(state, "Invalid number of parameters (expected 1).");
            lua_error(state);
            break;
        }
    }
    return 0;
}

int lua_ScreenDisplayer__init(lua_State* state)
{
    // Get the number of parameters.
    int paramCount = lua_gettop(state);

    // Attempt to match the parameters to a valid binding.
    switch (paramCount)
    {
        case 0:
        {
            void* returnPtr = (void*)new ScreenDisplayer();
            if (returnPtr)
            {
                ScriptController::LuaObject* object = (ScriptController::LuaObject*)lua_newuserdata(state, sizeof(ScriptController::LuaObject));
                object->instance = returnPtr;
                object->owns = true;
                luaL_getmetatable(state, "ScreenDisplayer");
                lua_setmetatable(state, -2);
            }
            else
            {
                lua_pushnil(state);
            }

            return 1;
            break;
        }
        default:
        {
            lua_pushstring(state, "Invalid number of parameters (expected 0).");
            lua_error(state);
            break;
        }
    }
    return 0;
}

int lua_ScreenDisplayer_static_finish(lua_State* state)
{
    // Get the number of parameters.
    int paramCount = lua_gettop(state);

    // Attempt to match the parameters to a valid binding.
    switch (paramCount)
    {
        case 0:
        {
            ScreenDisplayer::finish();
            
            return 0;
            break;
        }
        default:
        {
            lua_pushstring(state, "Invalid number of parameters (expected 0).");
            lua_error(state);
            break;
        }
    }
    return 0;
}

int lua_ScreenDisplayer_static_start(lua_State* state)
{
    // Get the number of parameters.
    int paramCount = lua_gettop(state);

    // Attempt to match the parameters to a valid binding.
    switch (paramCount)
    {
        case 2:
        {
            if ((lua_type(state, 1) == LUA_TSTRING || lua_type(state, 1) == LUA_TNIL) &&
                lua_type(state, 2) == LUA_TNUMBER)
            {
                // Get parameter 1 off the stack.
                const char* param1 = ScriptController::getInstance()->getString(1, false);

                // Get parameter 2 off the stack.
                unsigned long param2 = (unsigned long)luaL_checkunsigned(state, 2);

                ScreenDisplayer::start(param1, param2);
                
                return 0;
            }
            else
            {
                lua_pushstring(state, "Failed to match the given parameters to a valid function signature.");
                lua_error(state);
            }
            break;
        }
        default:
        {
            lua_pushstring(state, "Invalid number of parameters (expected 2).");
            lua_error(state);
            break;
        }
    }
    return 0;
}

}
