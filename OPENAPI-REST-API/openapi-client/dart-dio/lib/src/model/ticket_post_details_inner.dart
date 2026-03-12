//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_collection/built_collection.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'ticket_post_details_inner.g.dart';

/// TicketPostDetailsInner
///
/// Properties:
/// * [postId] 
/// * [date] 
/// * [contents] 
/// * [creator] 
/// * [creatorEmail] 
/// * [creatorName] 
/// * [hasattachments] 
/// * [attachmentDownload] 
@BuiltValue()
abstract class TicketPostDetailsInner implements Built<TicketPostDetailsInner, TicketPostDetailsInnerBuilder> {
  @BuiltValueField(wireName: r'post_id')
  int? get postId;

  @BuiltValueField(wireName: r'date')
  String? get date;

  @BuiltValueField(wireName: r'contents')
  String? get contents;

  @BuiltValueField(wireName: r'creator')
  TicketPostDetailsInnerCreatorEnum? get creator;
  // enum creatorEnum {  User,  Staff,  };

  @BuiltValueField(wireName: r'creator_email')
  String? get creatorEmail;

  @BuiltValueField(wireName: r'creator_name')
  String? get creatorName;

  @BuiltValueField(wireName: r'hasattachments')
  int? get hasattachments;

  @BuiltValueField(wireName: r'attachment_download')
  String? get attachmentDownload;

  TicketPostDetailsInner._();

  factory TicketPostDetailsInner([void updates(TicketPostDetailsInnerBuilder b)]) = _$TicketPostDetailsInner;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(TicketPostDetailsInnerBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<TicketPostDetailsInner> get serializer => _$TicketPostDetailsInnerSerializer();
}

class _$TicketPostDetailsInnerSerializer implements PrimitiveSerializer<TicketPostDetailsInner> {
  @override
  final Iterable<Type> types = const [TicketPostDetailsInner, _$TicketPostDetailsInner];

  @override
  final String wireName = r'TicketPostDetailsInner';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    TicketPostDetailsInner object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.postId != null) {
      yield r'post_id';
      yield serializers.serialize(
        object.postId,
        specifiedType: const FullType(int),
      );
    }
    if (object.date != null) {
      yield r'date';
      yield serializers.serialize(
        object.date,
        specifiedType: const FullType(String),
      );
    }
    if (object.contents != null) {
      yield r'contents';
      yield serializers.serialize(
        object.contents,
        specifiedType: const FullType(String),
      );
    }
    if (object.creator != null) {
      yield r'creator';
      yield serializers.serialize(
        object.creator,
        specifiedType: const FullType(TicketPostDetailsInnerCreatorEnum),
      );
    }
    if (object.creatorEmail != null) {
      yield r'creator_email';
      yield serializers.serialize(
        object.creatorEmail,
        specifiedType: const FullType(String),
      );
    }
    if (object.creatorName != null) {
      yield r'creator_name';
      yield serializers.serialize(
        object.creatorName,
        specifiedType: const FullType(String),
      );
    }
    if (object.hasattachments != null) {
      yield r'hasattachments';
      yield serializers.serialize(
        object.hasattachments,
        specifiedType: const FullType(int),
      );
    }
    if (object.attachmentDownload != null) {
      yield r'attachment_download';
      yield serializers.serialize(
        object.attachmentDownload,
        specifiedType: const FullType(String),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    TicketPostDetailsInner object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required TicketPostDetailsInnerBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'post_id':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.postId = valueDes;
          break;
        case r'date':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.date = valueDes;
          break;
        case r'contents':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.contents = valueDes;
          break;
        case r'creator':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(TicketPostDetailsInnerCreatorEnum),
          ) as TicketPostDetailsInnerCreatorEnum;
          result.creator = valueDes;
          break;
        case r'creator_email':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.creatorEmail = valueDes;
          break;
        case r'creator_name':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.creatorName = valueDes;
          break;
        case r'hasattachments':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.hasattachments = valueDes;
          break;
        case r'attachment_download':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.attachmentDownload = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  TicketPostDetailsInner deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = TicketPostDetailsInnerBuilder();
    final serializedList = (serialized as Iterable<Object?>).toList();
    final unhandled = <Object?>[];
    _deserializeProperties(
      serializers,
      serialized,
      specifiedType: specifiedType,
      serializedList: serializedList,
      unhandled: unhandled,
      result: result,
    );
    return result.build();
  }
}

class TicketPostDetailsInnerCreatorEnum extends EnumClass {

  @BuiltValueEnumConst(wireName: r'User')
  static const TicketPostDetailsInnerCreatorEnum user = _$ticketPostDetailsInnerCreatorEnum_user;
  @BuiltValueEnumConst(wireName: r'Staff')
  static const TicketPostDetailsInnerCreatorEnum staff = _$ticketPostDetailsInnerCreatorEnum_staff;

  static Serializer<TicketPostDetailsInnerCreatorEnum> get serializer => _$ticketPostDetailsInnerCreatorEnumSerializer;

  const TicketPostDetailsInnerCreatorEnum._(String name): super(name);

  static BuiltSet<TicketPostDetailsInnerCreatorEnum> get values => _$ticketPostDetailsInnerCreatorEnumValues;
  static TicketPostDetailsInnerCreatorEnum valueOf(String name) => _$ticketPostDetailsInnerCreatorEnumValueOf(name);
}

