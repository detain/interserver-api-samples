//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'mail_delist_request.g.dart';

/// Payload for removing a sender from mail blocklists.
///
/// Properties:
/// * [unblock] - Email address to delist.
@BuiltValue()
abstract class MailDelistRequest implements Built<MailDelistRequest, MailDelistRequestBuilder> {
  /// Email address to delist.
  @BuiltValueField(wireName: r'unblock')
  String? get unblock;

  MailDelistRequest._();

  factory MailDelistRequest([void updates(MailDelistRequestBuilder b)]) = _$MailDelistRequest;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(MailDelistRequestBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<MailDelistRequest> get serializer => _$MailDelistRequestSerializer();
}

class _$MailDelistRequestSerializer implements PrimitiveSerializer<MailDelistRequest> {
  @override
  final Iterable<Type> types = const [MailDelistRequest, _$MailDelistRequest];

  @override
  final String wireName = r'MailDelistRequest';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    MailDelistRequest object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.unblock != null) {
      yield r'unblock';
      yield serializers.serialize(
        object.unblock,
        specifiedType: const FullType(String),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    MailDelistRequest object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required MailDelistRequestBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'unblock':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.unblock = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  MailDelistRequest deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = MailDelistRequestBuilder();
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

