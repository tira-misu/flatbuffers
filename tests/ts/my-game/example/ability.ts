// automatically generated by the FlatBuffers compiler, do not modify

import * as flatbuffers from 'flatbuffers';



export class Ability {
  bb: flatbuffers.ByteBuffer|null = null;
  bb_pos = 0;
__init(i:number, bb:flatbuffers.ByteBuffer):Ability {
  this.bb_pos = i;
  this.bb = bb;
  return this;
}

id():number {
  return this.bb!.readUint32(this.bb_pos);
}

mutate_id(value:number):boolean {
  this.bb!.writeUint32(this.bb_pos + 0, value);
  return true;
}

distance():number {
  return this.bb!.readUint32(this.bb_pos + 4);
}

mutate_distance(value:number):boolean {
  this.bb!.writeUint32(this.bb_pos + 4, value);
  return true;
}

static getFullyQualifiedName():string {
  return 'MyGame.Example.Ability';
}

static sizeOf():number {
  return 8;
}

static createAbility(builder:flatbuffers.Builder, id: number, distance: number):flatbuffers.Offset {
  builder.prep(4, 8);
  builder.writeInt32(distance);
  builder.writeInt32(id);
  return builder.offset();
}


unpack(): AbilityT {
  return new AbilityT(
    this.id(),
    this.distance()
  );
}


unpackTo(_o: AbilityT): void {
  _o.id = this.id();
  _o.distance = this.distance();
}
}

export class AbilityT {
constructor(
  public id: number = 0,
  public distance: number = 0
){}


pack(builder:flatbuffers.Builder): flatbuffers.Offset {
  return Ability.createAbility(builder,
    this.id,
    this.distance
  );
}
}
