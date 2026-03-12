//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'template_request.g.dart';

/// VPS OS Template Request
///
/// Properties:
/// * [template] - OS Template Filename
/// * [localPassword] - Password for this account.
/// * [password] - Password for Root / Administrator Account.
@BuiltValue()
abstract class TemplateRequest implements Built<TemplateRequest, TemplateRequestBuilder> {
  /// OS Template Filename
  @BuiltValueField(wireName: r'template')
  String get template;

  /// Password for this account.
  @BuiltValueField(wireName: r'localPassword')
  String get localPassword;

  /// Password for Root / Administrator Account.
  @BuiltValueField(wireName: r'password')
  String? get password;

  TemplateRequest._();

  factory TemplateRequest([void updates(TemplateRequestBuilder b)]) = _$TemplateRequest;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(TemplateRequestBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<TemplateRequest> get serializer => _$TemplateRequestSerializer();
}

class _$TemplateRequestSerializer implements PrimitiveSerializer<TemplateRequest> {
  @override
  final Iterable<Type> types = const [TemplateRequest, _$TemplateRequest];

  @override
  final String wireName = r'TemplateRequest';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    TemplateRequest object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    yield r'template';
    yield serializers.serialize(
      object.template,
      specifiedType: const FullType(String),
    );
    yield r'localPassword';
    yield serializers.serialize(
      object.localPassword,
      specifiedType: const FullType(String),
    );
    if (object.password != null) {
      yield r'password';
      yield serializers.serialize(
        object.password,
        specifiedType: const FullType(String),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    TemplateRequest object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required TemplateRequestBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'template':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.template = valueDes;
          break;
        case r'localPassword':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.localPassword = valueDes;
          break;
        case r'password':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.password = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  TemplateRequest deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = TemplateRequestBuilder();
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

