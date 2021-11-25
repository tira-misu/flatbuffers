// automatically generated by the FlatBuffers compiler, do not modify
extern crate flatbuffers;
use std::mem;
use std::cmp::Ordering;
use self::flatbuffers::{EndianScalar, Follow};
use super::*;
pub enum KeywordsInTableOffset {}
#[derive(Copy, Clone, PartialEq)]

pub struct KeywordsInTable<'a> {
  pub _tab: flatbuffers::Table<'a>,
}

impl<'a> flatbuffers::Follow<'a> for KeywordsInTable<'a> {
  type Inner = KeywordsInTable<'a>;
  #[inline]
  fn follow(buf: &'a [u8], loc: usize) -> Self::Inner {
    Self { _tab: flatbuffers::Table { buf, loc } }
  }
}

impl<'a> KeywordsInTable<'a> {
  pub const VT_IS: flatbuffers::VOffsetT = 4;
  pub const VT_PRIVATE: flatbuffers::VOffsetT = 6;
  pub const VT_TYPE_: flatbuffers::VOffsetT = 8;

  pub const fn get_fully_qualified_name() -> &'static str {
    "KeywordTest.KeywordsInTable"
  }

  #[inline]
  pub fn init_from_table(table: flatbuffers::Table<'a>) -> Self {
    KeywordsInTable { _tab: table }
  }
  #[allow(unused_mut)]
  pub fn create<'bldr: 'args, 'args: 'mut_bldr, 'mut_bldr>(
    _fbb: &'mut_bldr mut flatbuffers::FlatBufferBuilder<'bldr>,
    args: &'args KeywordsInTableArgs
  ) -> flatbuffers::WIPOffset<KeywordsInTable<'bldr>> {
    let mut builder = KeywordsInTableBuilder::new(_fbb);
    builder.add_type_(args.type_);
    builder.add_private(args.private);
    builder.add_is(args.is);
    builder.finish()
  }

  pub fn unpack(&self) -> KeywordsInTableT {
    let is = self.is();
    let private = self.private();
    let type_ = self.type_();
    KeywordsInTableT {
      is,
      private,
      type_,
    }
  }

  #[inline]
  pub fn is(&self) -> ABC {
    self._tab.get::<ABC>(KeywordsInTable::VT_IS, Some(ABC::void)).unwrap()
  }
  #[inline]
  pub fn private(&self) -> public {
    self._tab.get::<public>(KeywordsInTable::VT_PRIVATE, Some(public::NONE)).unwrap()
  }
  #[inline]
  pub fn type_(&self) -> i32 {
    self._tab.get::<i32>(KeywordsInTable::VT_TYPE_, Some(0)).unwrap()
  }
}

impl flatbuffers::Verifiable for KeywordsInTable<'_> {
  #[inline]
  fn run_verifier(
    v: &mut flatbuffers::Verifier, pos: usize
  ) -> Result<(), flatbuffers::InvalidFlatbuffer> {
    use self::flatbuffers::Verifiable;
    v.visit_table(pos)?
     .visit_field::<ABC>("is", Self::VT_IS, false)?
     .visit_field::<public>("private", Self::VT_PRIVATE, false)?
     .visit_field::<i32>("type_", Self::VT_TYPE_, false)?
     .finish();
    Ok(())
  }
}
pub struct KeywordsInTableArgs {
    pub is: ABC,
    pub private: public,
    pub type_: i32,
}
impl<'a> Default for KeywordsInTableArgs {
  #[inline]
  fn default() -> Self {
    KeywordsInTableArgs {
      is: ABC::void,
      private: public::NONE,
      type_: 0,
    }
  }
}
pub struct KeywordsInTableBuilder<'a: 'b, 'b> {
  fbb_: &'b mut flatbuffers::FlatBufferBuilder<'a>,
  start_: flatbuffers::WIPOffset<flatbuffers::TableUnfinishedWIPOffset>,
}
impl<'a: 'b, 'b> KeywordsInTableBuilder<'a, 'b> {
  #[inline]
  pub fn add_is(&mut self, is: ABC) {
    self.fbb_.push_slot::<ABC>(KeywordsInTable::VT_IS, is, ABC::void);
  }
  #[inline]
  pub fn add_private(&mut self, private: public) {
    self.fbb_.push_slot::<public>(KeywordsInTable::VT_PRIVATE, private, public::NONE);
  }
  #[inline]
  pub fn add_type_(&mut self, type_: i32) {
    self.fbb_.push_slot::<i32>(KeywordsInTable::VT_TYPE_, type_, 0);
  }
  #[inline]
  pub fn new(_fbb: &'b mut flatbuffers::FlatBufferBuilder<'a>) -> KeywordsInTableBuilder<'a, 'b> {
    let start = _fbb.start_table();
    KeywordsInTableBuilder {
      fbb_: _fbb,
      start_: start,
    }
  }
  #[inline]
  pub fn finish(self) -> flatbuffers::WIPOffset<KeywordsInTable<'a>> {
    let o = self.fbb_.end_table(self.start_);
    flatbuffers::WIPOffset::new(o.value())
  }
}

impl std::fmt::Debug for KeywordsInTable<'_> {
  fn fmt(&self, f: &mut std::fmt::Formatter<'_>) -> std::fmt::Result {
    let mut ds = f.debug_struct("KeywordsInTable");
      ds.field("is", &self.is());
      ds.field("private", &self.private());
      ds.field("type_", &self.type_());
      ds.finish()
  }
}
#[non_exhaustive]
#[derive(Debug, Clone, PartialEq)]
pub struct KeywordsInTableT {
  pub is: ABC,
  pub private: public,
  pub type_: i32,
}
impl Default for KeywordsInTableT {
  fn default() -> Self {
    Self {
      is: ABC::void,
      private: public::NONE,
      type_: 0,
    }
  }
}
impl KeywordsInTableT {
  pub fn pack<'b>(
    &self,
    _fbb: &mut flatbuffers::FlatBufferBuilder<'b>
  ) -> flatbuffers::WIPOffset<KeywordsInTable<'b>> {
    let is = self.is;
    let private = self.private;
    let type_ = self.type_;
    KeywordsInTable::create(_fbb, &KeywordsInTableArgs{
      is,
      private,
      type_,
    })
  }
}
