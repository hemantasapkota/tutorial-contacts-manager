# Generated by the protocol buffer compiler.  DO NOT EDIT!

from google.protobuf import descriptor
from google.protobuf import message
from google.protobuf import reflection
from google.protobuf import descriptor_pb2
# @@protoc_insertion_point(imports)



DESCRIPTOR = descriptor.FileDescriptor(
  name='contactsmanager/contact.proto',
  package='contactsmanager.proto',
  serialized_pb='\n\x1d\x63ontactsmanager/contact.proto\x12\x15\x63ontactsmanager.proto\"e\n\x08PContact\x12\x11\n\tfirstName\x18\x01 \x01(\t\x12\x12\n\nmiddleName\x18\x02 \x01(\t\x12\x10\n\x08lastName\x18\x03 \x01(\t\x12\x0e\n\x06mobile\x18\x04 \x01(\t\x12\x10\n\x08homepage\x18\x05 \x01(\t')




_PCONTACT = descriptor.Descriptor(
  name='PContact',
  full_name='contactsmanager.proto.PContact',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    descriptor.FieldDescriptor(
      name='firstName', full_name='contactsmanager.proto.PContact.firstName', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=unicode("", "utf-8"),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='middleName', full_name='contactsmanager.proto.PContact.middleName', index=1,
      number=2, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=unicode("", "utf-8"),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='lastName', full_name='contactsmanager.proto.PContact.lastName', index=2,
      number=3, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=unicode("", "utf-8"),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='mobile', full_name='contactsmanager.proto.PContact.mobile', index=3,
      number=4, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=unicode("", "utf-8"),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='homepage', full_name='contactsmanager.proto.PContact.homepage', index=4,
      number=5, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=unicode("", "utf-8"),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  extension_ranges=[],
  serialized_start=56,
  serialized_end=157,
)

DESCRIPTOR.message_types_by_name['PContact'] = _PCONTACT

class PContact(message.Message):
  __metaclass__ = reflection.GeneratedProtocolMessageType
  DESCRIPTOR = _PCONTACT
  
  # @@protoc_insertion_point(class_scope:contactsmanager.proto.PContact)

# @@protoc_insertion_point(module_scope)