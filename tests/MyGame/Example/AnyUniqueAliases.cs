// <auto-generated>
//  automatically generated by the FlatBuffers compiler, do not modify
// </auto-generated>

namespace MyGame.Example
{

[Newtonsoft.Json.JsonConverter(typeof(Newtonsoft.Json.Converters.StringEnumConverter))]
public enum AnyUniqueAliases : byte
{
  NONE = 0,
  M = 1,
  TS = 2,
  M2 = 3,
};

public class AnyUniqueAliasesUnion {
  public AnyUniqueAliases Type { get; set; }
  public object Value { get; set; }

  public AnyUniqueAliasesUnion() {
    this.Type = AnyUniqueAliases.NONE;
    this.Value = null;
  }

  public T As<T>() where T : class { return this.Value as T; }
  public MyGame.Example.MonsterT AsM() { return this.As<MyGame.Example.MonsterT>(); }
  public static AnyUniqueAliasesUnion FromM(MyGame.Example.MonsterT _m) { return new AnyUniqueAliasesUnion{ Type = AnyUniqueAliases.M, Value = _m }; }
  internal MyGame.Example.TestSimpleTableWithEnumT AsTS() { return this.As<MyGame.Example.TestSimpleTableWithEnumT>(); }
  internal static AnyUniqueAliasesUnion FromTS(MyGame.Example.TestSimpleTableWithEnumT _ts) { return new AnyUniqueAliasesUnion{ Type = AnyUniqueAliases.TS, Value = _ts }; }
  public MyGame.Example2.MonsterT AsM2() { return this.As<MyGame.Example2.MonsterT>(); }
  public static AnyUniqueAliasesUnion FromM2(MyGame.Example2.MonsterT _m2) { return new AnyUniqueAliasesUnion{ Type = AnyUniqueAliases.M2, Value = _m2 }; }

  public static int Pack(Google.FlatBuffers.FlatBufferBuilder builder, AnyUniqueAliasesUnion _o) {
    switch (_o.Type) {
      default: return 0;
      case AnyUniqueAliases.M: return MyGame.Example.Monster.Pack(builder, _o.AsM()).Value;
      case AnyUniqueAliases.TS: return MyGame.Example.TestSimpleTableWithEnum.Pack(builder, _o.AsTS()).Value;
      case AnyUniqueAliases.M2: return MyGame.Example2.Monster.Pack(builder, _o.AsM2()).Value;
    }
  }
}



static public class AnyUniqueAliasesVerify
{
  static public bool Verify(Google.FlatBuffers.Verifier verifier, byte typeId, uint tablePos)
  {
    bool result = false;
    switch((AnyUniqueAliases)typeId)
    {
      case AnyUniqueAliases.M:
        result = MyGame.Example.MonsterVerify.Verify(verifier, tablePos);
        break;
      case AnyUniqueAliases.TS:
        result = MyGame.Example.TestSimpleTableWithEnumVerify.Verify(verifier, tablePos);
        break;
      case AnyUniqueAliases.M2:
        result = MyGame.Example2.MonsterVerify.Verify(verifier, tablePos);
        break;
      default: result = true;
        break;
    }
    return result;
  }
}

public class AnyUniqueAliasesUnion_JsonConverter : Newtonsoft.Json.JsonConverter {
  public override bool CanConvert(System.Type objectType) {
    return objectType == typeof(AnyUniqueAliasesUnion) || objectType == typeof(System.Collections.Generic.List<AnyUniqueAliasesUnion>);
  }
  public override void WriteJson(Newtonsoft.Json.JsonWriter writer, object value, Newtonsoft.Json.JsonSerializer serializer) {
    var _olist = value as System.Collections.Generic.List<AnyUniqueAliasesUnion>;
    if (_olist != null) {
      writer.WriteStartArray();
      foreach (var _o in _olist) { this.WriteJson(writer, _o, serializer); }
      writer.WriteEndArray();
    } else {
      this.WriteJson(writer, value as AnyUniqueAliasesUnion, serializer);
    }
  }
  public void WriteJson(Newtonsoft.Json.JsonWriter writer, AnyUniqueAliasesUnion _o, Newtonsoft.Json.JsonSerializer serializer) {
    if (_o == null) return;
    serializer.Serialize(writer, _o.Value);
  }
  public override object ReadJson(Newtonsoft.Json.JsonReader reader, System.Type objectType, object existingValue, Newtonsoft.Json.JsonSerializer serializer) {
    var _olist = existingValue as System.Collections.Generic.List<AnyUniqueAliasesUnion>;
    if (_olist != null) {
      for (var _j = 0; _j < _olist.Count; ++_j) {
        reader.Read();
        _olist[_j] = this.ReadJson(reader, _olist[_j], serializer);
      }
      reader.Read();
      return _olist;
    } else {
      return this.ReadJson(reader, existingValue as AnyUniqueAliasesUnion, serializer);
    }
  }
  public AnyUniqueAliasesUnion ReadJson(Newtonsoft.Json.JsonReader reader, AnyUniqueAliasesUnion _o, Newtonsoft.Json.JsonSerializer serializer) {
    if (_o == null) return null;
    switch (_o.Type) {
      default: break;
      case AnyUniqueAliases.M: _o.Value = serializer.Deserialize<MyGame.Example.MonsterT>(reader); break;
      case AnyUniqueAliases.TS: _o.Value = serializer.Deserialize<MyGame.Example.TestSimpleTableWithEnumT>(reader); break;
      case AnyUniqueAliases.M2: _o.Value = serializer.Deserialize<MyGame.Example2.MonsterT>(reader); break;
    }
    return _o;
  }
}


}
