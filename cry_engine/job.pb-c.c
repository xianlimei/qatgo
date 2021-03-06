/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: job.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "job.pb-c.h"
void   jobserver__job_request__init
                     (Jobserver__JobRequest         *message)
{
  static const Jobserver__JobRequest init_value = JOBSERVER__JOB_REQUEST__INIT;
  *message = init_value;
}
size_t jobserver__job_request__get_packed_size
                     (const Jobserver__JobRequest *message)
{
  assert(message->base.descriptor == &jobserver__job_request__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t jobserver__job_request__pack
                     (const Jobserver__JobRequest *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &jobserver__job_request__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t jobserver__job_request__pack_to_buffer
                     (const Jobserver__JobRequest *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &jobserver__job_request__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Jobserver__JobRequest *
       jobserver__job_request__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Jobserver__JobRequest *)
     protobuf_c_message_unpack (&jobserver__job_request__descriptor,
                                allocator, len, data);
}
void   jobserver__job_request__free_unpacked
                     (Jobserver__JobRequest *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &jobserver__job_request__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   jobserver__job_reply__init
                     (Jobserver__JobReply         *message)
{
  static const Jobserver__JobReply init_value = JOBSERVER__JOB_REPLY__INIT;
  *message = init_value;
}
size_t jobserver__job_reply__get_packed_size
                     (const Jobserver__JobReply *message)
{
  assert(message->base.descriptor == &jobserver__job_reply__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t jobserver__job_reply__pack
                     (const Jobserver__JobReply *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &jobserver__job_reply__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t jobserver__job_reply__pack_to_buffer
                     (const Jobserver__JobReply *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &jobserver__job_reply__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Jobserver__JobReply *
       jobserver__job_reply__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Jobserver__JobReply *)
     protobuf_c_message_unpack (&jobserver__job_reply__descriptor,
                                allocator, len, data);
}
void   jobserver__job_reply__free_unpacked
                     (Jobserver__JobReply *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &jobserver__job_reply__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   jobserver__rsa_request__init
                     (Jobserver__RsaRequest         *message)
{
  static const Jobserver__RsaRequest init_value = JOBSERVER__RSA_REQUEST__INIT;
  *message = init_value;
}
size_t jobserver__rsa_request__get_packed_size
                     (const Jobserver__RsaRequest *message)
{
  assert(message->base.descriptor == &jobserver__rsa_request__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t jobserver__rsa_request__pack
                     (const Jobserver__RsaRequest *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &jobserver__rsa_request__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t jobserver__rsa_request__pack_to_buffer
                     (const Jobserver__RsaRequest *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &jobserver__rsa_request__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Jobserver__RsaRequest *
       jobserver__rsa_request__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Jobserver__RsaRequest *)
     protobuf_c_message_unpack (&jobserver__rsa_request__descriptor,
                                allocator, len, data);
}
void   jobserver__rsa_request__free_unpacked
                     (Jobserver__RsaRequest *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &jobserver__rsa_request__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   jobserver__rsa_reply__init
                     (Jobserver__RsaReply         *message)
{
  static const Jobserver__RsaReply init_value = JOBSERVER__RSA_REPLY__INIT;
  *message = init_value;
}
size_t jobserver__rsa_reply__get_packed_size
                     (const Jobserver__RsaReply *message)
{
  assert(message->base.descriptor == &jobserver__rsa_reply__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t jobserver__rsa_reply__pack
                     (const Jobserver__RsaReply *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &jobserver__rsa_reply__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t jobserver__rsa_reply__pack_to_buffer
                     (const Jobserver__RsaReply *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &jobserver__rsa_reply__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Jobserver__RsaReply *
       jobserver__rsa_reply__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Jobserver__RsaReply *)
     protobuf_c_message_unpack (&jobserver__rsa_reply__descriptor,
                                allocator, len, data);
}
void   jobserver__rsa_reply__free_unpacked
                     (Jobserver__RsaReply *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &jobserver__rsa_reply__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   jobserver__ecdsa_sign_request__init
                     (Jobserver__EcdsaSignRequest         *message)
{
  static const Jobserver__EcdsaSignRequest init_value = JOBSERVER__ECDSA_SIGN_REQUEST__INIT;
  *message = init_value;
}
size_t jobserver__ecdsa_sign_request__get_packed_size
                     (const Jobserver__EcdsaSignRequest *message)
{
  assert(message->base.descriptor == &jobserver__ecdsa_sign_request__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t jobserver__ecdsa_sign_request__pack
                     (const Jobserver__EcdsaSignRequest *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &jobserver__ecdsa_sign_request__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t jobserver__ecdsa_sign_request__pack_to_buffer
                     (const Jobserver__EcdsaSignRequest *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &jobserver__ecdsa_sign_request__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Jobserver__EcdsaSignRequest *
       jobserver__ecdsa_sign_request__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Jobserver__EcdsaSignRequest *)
     protobuf_c_message_unpack (&jobserver__ecdsa_sign_request__descriptor,
                                allocator, len, data);
}
void   jobserver__ecdsa_sign_request__free_unpacked
                     (Jobserver__EcdsaSignRequest *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &jobserver__ecdsa_sign_request__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   jobserver__ecdsa_sign_reply__init
                     (Jobserver__EcdsaSignReply         *message)
{
  static const Jobserver__EcdsaSignReply init_value = JOBSERVER__ECDSA_SIGN_REPLY__INIT;
  *message = init_value;
}
size_t jobserver__ecdsa_sign_reply__get_packed_size
                     (const Jobserver__EcdsaSignReply *message)
{
  assert(message->base.descriptor == &jobserver__ecdsa_sign_reply__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t jobserver__ecdsa_sign_reply__pack
                     (const Jobserver__EcdsaSignReply *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &jobserver__ecdsa_sign_reply__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t jobserver__ecdsa_sign_reply__pack_to_buffer
                     (const Jobserver__EcdsaSignReply *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &jobserver__ecdsa_sign_reply__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Jobserver__EcdsaSignReply *
       jobserver__ecdsa_sign_reply__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Jobserver__EcdsaSignReply *)
     protobuf_c_message_unpack (&jobserver__ecdsa_sign_reply__descriptor,
                                allocator, len, data);
}
void   jobserver__ecdsa_sign_reply__free_unpacked
                     (Jobserver__EcdsaSignReply *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &jobserver__ecdsa_sign_reply__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   jobserver__ecdsa_verify_request__init
                     (Jobserver__EcdsaVerifyRequest         *message)
{
  static const Jobserver__EcdsaVerifyRequest init_value = JOBSERVER__ECDSA_VERIFY_REQUEST__INIT;
  *message = init_value;
}
size_t jobserver__ecdsa_verify_request__get_packed_size
                     (const Jobserver__EcdsaVerifyRequest *message)
{
  assert(message->base.descriptor == &jobserver__ecdsa_verify_request__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t jobserver__ecdsa_verify_request__pack
                     (const Jobserver__EcdsaVerifyRequest *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &jobserver__ecdsa_verify_request__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t jobserver__ecdsa_verify_request__pack_to_buffer
                     (const Jobserver__EcdsaVerifyRequest *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &jobserver__ecdsa_verify_request__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Jobserver__EcdsaVerifyRequest *
       jobserver__ecdsa_verify_request__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Jobserver__EcdsaVerifyRequest *)
     protobuf_c_message_unpack (&jobserver__ecdsa_verify_request__descriptor,
                                allocator, len, data);
}
void   jobserver__ecdsa_verify_request__free_unpacked
                     (Jobserver__EcdsaVerifyRequest *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &jobserver__ecdsa_verify_request__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   jobserver__ecdsa_verify_reply__init
                     (Jobserver__EcdsaVerifyReply         *message)
{
  static const Jobserver__EcdsaVerifyReply init_value = JOBSERVER__ECDSA_VERIFY_REPLY__INIT;
  *message = init_value;
}
size_t jobserver__ecdsa_verify_reply__get_packed_size
                     (const Jobserver__EcdsaVerifyReply *message)
{
  assert(message->base.descriptor == &jobserver__ecdsa_verify_reply__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t jobserver__ecdsa_verify_reply__pack
                     (const Jobserver__EcdsaVerifyReply *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &jobserver__ecdsa_verify_reply__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t jobserver__ecdsa_verify_reply__pack_to_buffer
                     (const Jobserver__EcdsaVerifyReply *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &jobserver__ecdsa_verify_reply__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Jobserver__EcdsaVerifyReply *
       jobserver__ecdsa_verify_reply__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Jobserver__EcdsaVerifyReply *)
     protobuf_c_message_unpack (&jobserver__ecdsa_verify_reply__descriptor,
                                allocator, len, data);
}
void   jobserver__ecdsa_verify_reply__free_unpacked
                     (Jobserver__EcdsaVerifyReply *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &jobserver__ecdsa_verify_reply__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor jobserver__job_request__field_descriptors[3] =
{
  {
    "opType",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_INT32,
    0,   /* quantifier_offset */
    offsetof(Jobserver__JobRequest, optype),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "sni",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Jobserver__JobRequest, sni),
    NULL,
    &protobuf_c_empty_string,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "payload",
    3,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_BYTES,
    0,   /* quantifier_offset */
    offsetof(Jobserver__JobRequest, payload),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned jobserver__job_request__field_indices_by_name[] = {
  0,   /* field[0] = opType */
  2,   /* field[2] = payload */
  1,   /* field[1] = sni */
};
static const ProtobufCIntRange jobserver__job_request__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 3 }
};
const ProtobufCMessageDescriptor jobserver__job_request__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "jobserver.JobRequest",
  "JobRequest",
  "Jobserver__JobRequest",
  "jobserver",
  sizeof(Jobserver__JobRequest),
  3,
  jobserver__job_request__field_descriptors,
  jobserver__job_request__field_indices_by_name,
  1,  jobserver__job_request__number_ranges,
  (ProtobufCMessageInit) jobserver__job_request__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor jobserver__job_reply__field_descriptors[2] =
{
  {
    "status",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_INT32,
    0,   /* quantifier_offset */
    offsetof(Jobserver__JobReply, status),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "msg",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Jobserver__JobReply, msg),
    NULL,
    &protobuf_c_empty_string,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned jobserver__job_reply__field_indices_by_name[] = {
  1,   /* field[1] = msg */
  0,   /* field[0] = status */
};
static const ProtobufCIntRange jobserver__job_reply__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor jobserver__job_reply__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "jobserver.JobReply",
  "JobReply",
  "Jobserver__JobReply",
  "jobserver",
  sizeof(Jobserver__JobReply),
  2,
  jobserver__job_reply__field_descriptors,
  jobserver__job_reply__field_indices_by_name,
  1,  jobserver__job_reply__number_ranges,
  (ProtobufCMessageInit) jobserver__job_reply__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor jobserver__rsa_request__field_descriptors[3] =
{
  {
    "opType",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_INT32,
    0,   /* quantifier_offset */
    offsetof(Jobserver__RsaRequest, optype),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "sni",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Jobserver__RsaRequest, sni),
    NULL,
    &protobuf_c_empty_string,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "payload",
    3,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_BYTES,
    0,   /* quantifier_offset */
    offsetof(Jobserver__RsaRequest, payload),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned jobserver__rsa_request__field_indices_by_name[] = {
  0,   /* field[0] = opType */
  2,   /* field[2] = payload */
  1,   /* field[1] = sni */
};
static const ProtobufCIntRange jobserver__rsa_request__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 3 }
};
const ProtobufCMessageDescriptor jobserver__rsa_request__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "jobserver.RsaRequest",
  "RsaRequest",
  "Jobserver__RsaRequest",
  "jobserver",
  sizeof(Jobserver__RsaRequest),
  3,
  jobserver__rsa_request__field_descriptors,
  jobserver__rsa_request__field_indices_by_name,
  1,  jobserver__rsa_request__number_ranges,
  (ProtobufCMessageInit) jobserver__rsa_request__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor jobserver__rsa_reply__field_descriptors[2] =
{
  {
    "status",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_INT32,
    0,   /* quantifier_offset */
    offsetof(Jobserver__RsaReply, status),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "msg",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Jobserver__RsaReply, msg),
    NULL,
    &protobuf_c_empty_string,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned jobserver__rsa_reply__field_indices_by_name[] = {
  1,   /* field[1] = msg */
  0,   /* field[0] = status */
};
static const ProtobufCIntRange jobserver__rsa_reply__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor jobserver__rsa_reply__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "jobserver.RsaReply",
  "RsaReply",
  "Jobserver__RsaReply",
  "jobserver",
  sizeof(Jobserver__RsaReply),
  2,
  jobserver__rsa_reply__field_descriptors,
  jobserver__rsa_reply__field_indices_by_name,
  1,  jobserver__rsa_reply__number_ranges,
  (ProtobufCMessageInit) jobserver__rsa_reply__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor jobserver__ecdsa_sign_request__field_descriptors[3] =
{
  {
    "opType",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_INT32,
    0,   /* quantifier_offset */
    offsetof(Jobserver__EcdsaSignRequest, optype),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "sni",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Jobserver__EcdsaSignRequest, sni),
    NULL,
    &protobuf_c_empty_string,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "digest",
    3,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_BYTES,
    0,   /* quantifier_offset */
    offsetof(Jobserver__EcdsaSignRequest, digest),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned jobserver__ecdsa_sign_request__field_indices_by_name[] = {
  2,   /* field[2] = digest */
  0,   /* field[0] = opType */
  1,   /* field[1] = sni */
};
static const ProtobufCIntRange jobserver__ecdsa_sign_request__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 3 }
};
const ProtobufCMessageDescriptor jobserver__ecdsa_sign_request__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "jobserver.EcdsaSignRequest",
  "EcdsaSignRequest",
  "Jobserver__EcdsaSignRequest",
  "jobserver",
  sizeof(Jobserver__EcdsaSignRequest),
  3,
  jobserver__ecdsa_sign_request__field_descriptors,
  jobserver__ecdsa_sign_request__field_indices_by_name,
  1,  jobserver__ecdsa_sign_request__number_ranges,
  (ProtobufCMessageInit) jobserver__ecdsa_sign_request__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor jobserver__ecdsa_sign_reply__field_descriptors[4] =
{
  {
    "status",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_INT32,
    0,   /* quantifier_offset */
    offsetof(Jobserver__EcdsaSignReply, status),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "msg",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Jobserver__EcdsaSignReply, msg),
    NULL,
    &protobuf_c_empty_string,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "r",
    3,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_BYTES,
    0,   /* quantifier_offset */
    offsetof(Jobserver__EcdsaSignReply, r),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "s",
    4,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_BYTES,
    0,   /* quantifier_offset */
    offsetof(Jobserver__EcdsaSignReply, s),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned jobserver__ecdsa_sign_reply__field_indices_by_name[] = {
  1,   /* field[1] = msg */
  2,   /* field[2] = r */
  3,   /* field[3] = s */
  0,   /* field[0] = status */
};
static const ProtobufCIntRange jobserver__ecdsa_sign_reply__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 4 }
};
const ProtobufCMessageDescriptor jobserver__ecdsa_sign_reply__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "jobserver.EcdsaSignReply",
  "EcdsaSignReply",
  "Jobserver__EcdsaSignReply",
  "jobserver",
  sizeof(Jobserver__EcdsaSignReply),
  4,
  jobserver__ecdsa_sign_reply__field_descriptors,
  jobserver__ecdsa_sign_reply__field_indices_by_name,
  1,  jobserver__ecdsa_sign_reply__number_ranges,
  (ProtobufCMessageInit) jobserver__ecdsa_sign_reply__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor jobserver__ecdsa_verify_request__field_descriptors[5] =
{
  {
    "opType",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_INT32,
    0,   /* quantifier_offset */
    offsetof(Jobserver__EcdsaVerifyRequest, optype),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "sni",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Jobserver__EcdsaVerifyRequest, sni),
    NULL,
    &protobuf_c_empty_string,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "digest",
    3,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_BYTES,
    0,   /* quantifier_offset */
    offsetof(Jobserver__EcdsaVerifyRequest, digest),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "r",
    4,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_BYTES,
    0,   /* quantifier_offset */
    offsetof(Jobserver__EcdsaVerifyRequest, r),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "s",
    5,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_BYTES,
    0,   /* quantifier_offset */
    offsetof(Jobserver__EcdsaVerifyRequest, s),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned jobserver__ecdsa_verify_request__field_indices_by_name[] = {
  2,   /* field[2] = digest */
  0,   /* field[0] = opType */
  3,   /* field[3] = r */
  4,   /* field[4] = s */
  1,   /* field[1] = sni */
};
static const ProtobufCIntRange jobserver__ecdsa_verify_request__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 5 }
};
const ProtobufCMessageDescriptor jobserver__ecdsa_verify_request__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "jobserver.EcdsaVerifyRequest",
  "EcdsaVerifyRequest",
  "Jobserver__EcdsaVerifyRequest",
  "jobserver",
  sizeof(Jobserver__EcdsaVerifyRequest),
  5,
  jobserver__ecdsa_verify_request__field_descriptors,
  jobserver__ecdsa_verify_request__field_indices_by_name,
  1,  jobserver__ecdsa_verify_request__number_ranges,
  (ProtobufCMessageInit) jobserver__ecdsa_verify_request__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor jobserver__ecdsa_verify_reply__field_descriptors[3] =
{
  {
    "status",
    1,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_INT32,
    0,   /* quantifier_offset */
    offsetof(Jobserver__EcdsaVerifyReply, status),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "msg",
    2,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Jobserver__EcdsaVerifyReply, msg),
    NULL,
    &protobuf_c_empty_string,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "verify",
    3,
    PROTOBUF_C_LABEL_NONE,
    PROTOBUF_C_TYPE_BOOL,
    0,   /* quantifier_offset */
    offsetof(Jobserver__EcdsaVerifyReply, verify),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned jobserver__ecdsa_verify_reply__field_indices_by_name[] = {
  1,   /* field[1] = msg */
  0,   /* field[0] = status */
  2,   /* field[2] = verify */
};
static const ProtobufCIntRange jobserver__ecdsa_verify_reply__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 3 }
};
const ProtobufCMessageDescriptor jobserver__ecdsa_verify_reply__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "jobserver.EcdsaVerifyReply",
  "EcdsaVerifyReply",
  "Jobserver__EcdsaVerifyReply",
  "jobserver",
  sizeof(Jobserver__EcdsaVerifyReply),
  3,
  jobserver__ecdsa_verify_reply__field_descriptors,
  jobserver__ecdsa_verify_reply__field_indices_by_name,
  1,  jobserver__ecdsa_verify_reply__number_ranges,
  (ProtobufCMessageInit) jobserver__ecdsa_verify_reply__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCMethodDescriptor jobserver__job_server__method_descriptors[1] =
{
  { "SayHello", &jobserver__job_request__descriptor, &jobserver__job_reply__descriptor },
};
const unsigned jobserver__job_server__method_indices_by_name[] = {
  0         /* SayHello */
};
const ProtobufCServiceDescriptor jobserver__job_server__descriptor =
{
  PROTOBUF_C__SERVICE_DESCRIPTOR_MAGIC,
  "jobserver.JobServer",
  "JobServer",
  "Jobserver__JobServer",
  "jobserver",
  1,
  jobserver__job_server__method_descriptors,
  jobserver__job_server__method_indices_by_name
};
void jobserver__job_server__say_hello(ProtobufCService *service,
                                      const Jobserver__JobRequest *input,
                                      Jobserver__JobReply_Closure closure,
                                      void *closure_data)
{
  assert(service->descriptor == &jobserver__job_server__descriptor);
  service->invoke(service, 0, (const ProtobufCMessage *) input, (ProtobufCClosure) closure, closure_data);
}
void jobserver__job_server__init (Jobserver__JobServer_Service *service,
                                  Jobserver__JobServer_ServiceDestroy destroy)
{
  protobuf_c_service_generated_init (&service->base,
                                     &jobserver__job_server__descriptor,
                                     (ProtobufCServiceDestroy) destroy);
}
