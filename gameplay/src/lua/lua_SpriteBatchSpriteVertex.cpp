// Autogenerated by gameplay-luagen
#include "Base.h"
#include "ScriptController.h"
#include "lua_SpriteBatchSpriteVertex.h"
#include "SpriteBatch.h"

namespace gameplay
{

void luaRegister_SpriteBatchSpriteVertex()
{
    const luaL_Reg lua_members[] = 
    {
        {"a", lua_SpriteBatchSpriteVertex_a},
        {"b", lua_SpriteBatchSpriteVertex_b},
        {"g", lua_SpriteBatchSpriteVertex_g},
        {"r", lua_SpriteBatchSpriteVertex_r},
        {"u", lua_SpriteBatchSpriteVertex_u},
        {"v", lua_SpriteBatchSpriteVertex_v},
        {"x", lua_SpriteBatchSpriteVertex_x},
        {"y", lua_SpriteBatchSpriteVertex_y},
        {"z", lua_SpriteBatchSpriteVertex_z},
        {NULL, NULL}
    };
    const luaL_Reg* lua_statics = NULL;
    std::vector<std::string> scopePath;
    scopePath.push_back("SpriteBatch");

    gameplay::ScriptUtil::registerClass("SpriteBatchSpriteVertex", lua_members, lua_SpriteBatchSpriteVertex__init, lua_SpriteBatchSpriteVertex__gc, lua_statics, scopePath);
}

static SpriteBatch::SpriteVertex* getInstance(lua_State* state)
{
    void* userdata = luaL_checkudata(state, 1, "SpriteBatchSpriteVertex");
    luaL_argcheck(state, userdata != NULL, 1, "'SpriteBatchSpriteVertex' expected.");
    return (SpriteBatch::SpriteVertex*)((gameplay::ScriptUtil::LuaObject*)userdata)->instance;
}

int lua_SpriteBatchSpriteVertex__gc(lua_State* state)
{
    // Get the number of parameters.
    int paramCount = lua_gettop(state);

    // Attempt to match the parameters to a valid binding.
    switch (paramCount)
    {
        case 1:
        {
            if ((lua_type(state, 1) == LUA_TUSERDATA))
            {
                void* userdata = luaL_checkudata(state, 1, "SpriteBatchSpriteVertex");
                luaL_argcheck(state, userdata != NULL, 1, "'SpriteBatchSpriteVertex' expected.");
                gameplay::ScriptUtil::LuaObject* object = (gameplay::ScriptUtil::LuaObject*)userdata;
                if (object->owns)
                {
                    SpriteBatch::SpriteVertex* instance = (SpriteBatch::SpriteVertex*)object->instance;
                    SAFE_DELETE(instance);
                }
                
                return 0;
            }

            lua_pushstring(state, "lua_SpriteBatchSpriteVertex__gc - Failed to match the given parameters to a valid function signature.");
            lua_error(state);
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

int lua_SpriteBatchSpriteVertex__init(lua_State* state)
{
    // Get the number of parameters.
    int paramCount = lua_gettop(state);

    // Attempt to match the parameters to a valid binding.
    switch (paramCount)
    {
        case 0:
        {
            void* returnPtr = ((void*)new SpriteBatch::SpriteVertex());
            if (returnPtr)
            {
                gameplay::ScriptUtil::LuaObject* object = (gameplay::ScriptUtil::LuaObject*)lua_newuserdata(state, sizeof(gameplay::ScriptUtil::LuaObject));
                object->instance = returnPtr;
                object->owns = true;
                luaL_getmetatable(state, "SpriteBatchSpriteVertex");
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

int lua_SpriteBatchSpriteVertex_a(lua_State* state)
{
    // Validate the number of parameters.
    if (lua_gettop(state) > 2)
    {
        lua_pushstring(state, "Invalid number of parameters (expected 1 or 2).");
        lua_error(state);
    }

    SpriteBatch::SpriteVertex* instance = getInstance(state);
    if (lua_gettop(state) == 2)
    {
        // Get parameter 2 off the stack.
        float param2 = (float)luaL_checknumber(state, 2);

        instance->a = param2;
        return 0;
    }
    else
    {
        float result = instance->a;

        // Push the return value onto the stack.
        lua_pushnumber(state, result);

        return 1;
    }
}

int lua_SpriteBatchSpriteVertex_b(lua_State* state)
{
    // Validate the number of parameters.
    if (lua_gettop(state) > 2)
    {
        lua_pushstring(state, "Invalid number of parameters (expected 1 or 2).");
        lua_error(state);
    }

    SpriteBatch::SpriteVertex* instance = getInstance(state);
    if (lua_gettop(state) == 2)
    {
        // Get parameter 2 off the stack.
        float param2 = (float)luaL_checknumber(state, 2);

        instance->b = param2;
        return 0;
    }
    else
    {
        float result = instance->b;

        // Push the return value onto the stack.
        lua_pushnumber(state, result);

        return 1;
    }
}

int lua_SpriteBatchSpriteVertex_g(lua_State* state)
{
    // Validate the number of parameters.
    if (lua_gettop(state) > 2)
    {
        lua_pushstring(state, "Invalid number of parameters (expected 1 or 2).");
        lua_error(state);
    }

    SpriteBatch::SpriteVertex* instance = getInstance(state);
    if (lua_gettop(state) == 2)
    {
        // Get parameter 2 off the stack.
        float param2 = (float)luaL_checknumber(state, 2);

        instance->g = param2;
        return 0;
    }
    else
    {
        float result = instance->g;

        // Push the return value onto the stack.
        lua_pushnumber(state, result);

        return 1;
    }
}

int lua_SpriteBatchSpriteVertex_r(lua_State* state)
{
    // Validate the number of parameters.
    if (lua_gettop(state) > 2)
    {
        lua_pushstring(state, "Invalid number of parameters (expected 1 or 2).");
        lua_error(state);
    }

    SpriteBatch::SpriteVertex* instance = getInstance(state);
    if (lua_gettop(state) == 2)
    {
        // Get parameter 2 off the stack.
        float param2 = (float)luaL_checknumber(state, 2);

        instance->r = param2;
        return 0;
    }
    else
    {
        float result = instance->r;

        // Push the return value onto the stack.
        lua_pushnumber(state, result);

        return 1;
    }
}

int lua_SpriteBatchSpriteVertex_u(lua_State* state)
{
    // Validate the number of parameters.
    if (lua_gettop(state) > 2)
    {
        lua_pushstring(state, "Invalid number of parameters (expected 1 or 2).");
        lua_error(state);
    }

    SpriteBatch::SpriteVertex* instance = getInstance(state);
    if (lua_gettop(state) == 2)
    {
        // Get parameter 2 off the stack.
        float param2 = (float)luaL_checknumber(state, 2);

        instance->u = param2;
        return 0;
    }
    else
    {
        float result = instance->u;

        // Push the return value onto the stack.
        lua_pushnumber(state, result);

        return 1;
    }
}

int lua_SpriteBatchSpriteVertex_v(lua_State* state)
{
    // Validate the number of parameters.
    if (lua_gettop(state) > 2)
    {
        lua_pushstring(state, "Invalid number of parameters (expected 1 or 2).");
        lua_error(state);
    }

    SpriteBatch::SpriteVertex* instance = getInstance(state);
    if (lua_gettop(state) == 2)
    {
        // Get parameter 2 off the stack.
        float param2 = (float)luaL_checknumber(state, 2);

        instance->v = param2;
        return 0;
    }
    else
    {
        float result = instance->v;

        // Push the return value onto the stack.
        lua_pushnumber(state, result);

        return 1;
    }
}

int lua_SpriteBatchSpriteVertex_x(lua_State* state)
{
    // Validate the number of parameters.
    if (lua_gettop(state) > 2)
    {
        lua_pushstring(state, "Invalid number of parameters (expected 1 or 2).");
        lua_error(state);
    }

    SpriteBatch::SpriteVertex* instance = getInstance(state);
    if (lua_gettop(state) == 2)
    {
        // Get parameter 2 off the stack.
        float param2 = (float)luaL_checknumber(state, 2);

        instance->x = param2;
        return 0;
    }
    else
    {
        float result = instance->x;

        // Push the return value onto the stack.
        lua_pushnumber(state, result);

        return 1;
    }
}

int lua_SpriteBatchSpriteVertex_y(lua_State* state)
{
    // Validate the number of parameters.
    if (lua_gettop(state) > 2)
    {
        lua_pushstring(state, "Invalid number of parameters (expected 1 or 2).");
        lua_error(state);
    }

    SpriteBatch::SpriteVertex* instance = getInstance(state);
    if (lua_gettop(state) == 2)
    {
        // Get parameter 2 off the stack.
        float param2 = (float)luaL_checknumber(state, 2);

        instance->y = param2;
        return 0;
    }
    else
    {
        float result = instance->y;

        // Push the return value onto the stack.
        lua_pushnumber(state, result);

        return 1;
    }
}

int lua_SpriteBatchSpriteVertex_z(lua_State* state)
{
    // Validate the number of parameters.
    if (lua_gettop(state) > 2)
    {
        lua_pushstring(state, "Invalid number of parameters (expected 1 or 2).");
        lua_error(state);
    }

    SpriteBatch::SpriteVertex* instance = getInstance(state);
    if (lua_gettop(state) == 2)
    {
        // Get parameter 2 off the stack.
        float param2 = (float)luaL_checknumber(state, 2);

        instance->z = param2;
        return 0;
    }
    else
    {
        float result = instance->z;

        // Push the return value onto the stack.
        lua_pushnumber(state, result);

        return 1;
    }
}

}
