--[[ MyGame.OtherNameSpace.Unused

  Automatically generated by the FlatBuffers compiler, do not modify.
  Or modify. I'm a message, not a cop.

  flatc version: 24.3.25

  Declared by  : //include_test/sub/include_test2.fbs
  Rooting type : MyGame.Example.Monster (//monster_test.fbs)

--]]

local flatbuffers = require('flatbuffers')

local Unused = {}
local mt = {}

function Unused.New()
  local o = {}
  setmetatable(o, {__index = mt})
  return o
end

function mt:Init(buf, pos)
  self.view = flatbuffers.view.New(buf, pos)
end

function mt:A()
  return self.view:Get(flatbuffers.N.Int32, self.view.pos + 0)
end

function Unused.CreateUnused(builder, a)
  builder:Prep(4, 4)
  builder:PrependInt32(a)
  return builder:Offset()
end

return Unused