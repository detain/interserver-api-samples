//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_collection/built_collection.dart';
import 'package:built_value/json_object.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'mail_delist_response.g.dart';

/// Blocklist status information for a mail service.
///
/// Properties:
/// * [id] - Mail service ID.
/// * [local] - Local blocklist entries.
/// * [mbtrap] - MailBaby trap block entries.
/// * [subject] - Subject-based block entries.
/// * [manual] - Manually blocked entries.
@BuiltValue()
abstract class MailDelistResponse implements Built<MailDelistResponse, MailDelistResponseBuilder> {
  /// Mail service ID.
  @BuiltValueField(wireName: r'id')
  int? get id;

  /// Local blocklist entries.
  @BuiltValueField(wireName: r'local')
  BuiltList<JsonObject>? get local;

  /// MailBaby trap block entries.
  @BuiltValueField(wireName: r'mbtrap')
  BuiltList<JsonObject>? get mbtrap;

  /// Subject-based block entries.
  @BuiltValueField(wireName: r'subject')
  BuiltList<JsonObject>? get subject;

  /// Manually blocked entries.
  @BuiltValueField(wireName: r'manual')
  BuiltList<JsonObject>? get manual;

  MailDelistResponse._();

  factory MailDelistResponse([void updates(MailDelistResponseBuilder b)]) = _$MailDelistResponse;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(MailDelistResponseBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<MailDelistResponse> get serializer => _$MailDelistResponseSerializer();
}

class _$MailDelistResponseSerializer implements PrimitiveSerializer<MailDelistResponse> {
  @override
  final Iterable<Type> types = const [MailDelistResponse, _$MailDelistResponse];

  @override
  final String wireName = r'MailDelistResponse';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    MailDelistResponse object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.id != null) {
      yield r'id';
      yield serializers.serialize(
        object.id,
        specifiedType: const FullType(int),
      );
    }
    if (object.local != null) {
      yield r'local';
      yield serializers.serialize(
        object.local,
        specifiedType: const FullType(BuiltList, [FullType(JsonObject)]),
      );
    }
    if (object.mbtrap != null) {
      yield r'mbtrap';
      yield serializers.serialize(
        object.mbtrap,
        specifiedType: const FullType(BuiltList, [FullType(JsonObject)]),
      );
    }
    if (object.subject != null) {
      yield r'subject';
      yield serializers.serialize(
        object.subject,
        specifiedType: const FullType(BuiltList, [FullType(JsonObject)]),
      );
    }
    if (object.manual != null) {
      yield r'manual';
      yield serializers.serialize(
        object.manual,
        specifiedType: const FullType(BuiltList, [FullType(JsonObject)]),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    MailDelistResponse object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required MailDelistResponseBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'id':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.id = valueDes;
          break;
        case r'local':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(BuiltList, [FullType(JsonObject)]),
          ) as BuiltList<JsonObject>;
          result.local.replace(valueDes);
          break;
        case r'mbtrap':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(BuiltList, [FullType(JsonObject)]),
          ) as BuiltList<JsonObject>;
          result.mbtrap.replace(valueDes);
          break;
        case r'subject':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(BuiltList, [FullType(JsonObject)]),
          ) as BuiltList<JsonObject>;
          result.subject.replace(valueDes);
          break;
        case r'manual':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(BuiltList, [FullType(JsonObject)]),
          ) as BuiltList<JsonObject>;
          result.manual.replace(valueDes);
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  MailDelistResponse deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = MailDelistResponseBuilder();
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

