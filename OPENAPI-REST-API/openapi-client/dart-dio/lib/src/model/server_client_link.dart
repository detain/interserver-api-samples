//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'server_client_link.g.dart';

/// ServerClientLink
///
/// Properties:
/// * [label] 
/// * [link] 
/// * [icon] 
/// * [iconText] 
/// * [helpText] 
@BuiltValue()
abstract class ServerClientLink implements Built<ServerClientLink, ServerClientLinkBuilder> {
  @BuiltValueField(wireName: r'label')
  String get label;

  @BuiltValueField(wireName: r'link')
  String get link;

  @BuiltValueField(wireName: r'icon')
  String? get icon;

  @BuiltValueField(wireName: r'icon_text')
  String? get iconText;

  @BuiltValueField(wireName: r'help_text')
  String? get helpText;

  ServerClientLink._();

  factory ServerClientLink([void updates(ServerClientLinkBuilder b)]) = _$ServerClientLink;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(ServerClientLinkBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<ServerClientLink> get serializer => _$ServerClientLinkSerializer();
}

class _$ServerClientLinkSerializer implements PrimitiveSerializer<ServerClientLink> {
  @override
  final Iterable<Type> types = const [ServerClientLink, _$ServerClientLink];

  @override
  final String wireName = r'ServerClientLink';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    ServerClientLink object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    yield r'label';
    yield serializers.serialize(
      object.label,
      specifiedType: const FullType(String),
    );
    yield r'link';
    yield serializers.serialize(
      object.link,
      specifiedType: const FullType(String),
    );
    if (object.icon != null) {
      yield r'icon';
      yield serializers.serialize(
        object.icon,
        specifiedType: const FullType(String),
      );
    }
    if (object.iconText != null) {
      yield r'icon_text';
      yield serializers.serialize(
        object.iconText,
        specifiedType: const FullType(String),
      );
    }
    if (object.helpText != null) {
      yield r'help_text';
      yield serializers.serialize(
        object.helpText,
        specifiedType: const FullType(String),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    ServerClientLink object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required ServerClientLinkBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'label':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.label = valueDes;
          break;
        case r'link':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.link = valueDes;
          break;
        case r'icon':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.icon = valueDes;
          break;
        case r'icon_text':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.iconText = valueDes;
          break;
        case r'help_text':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.helpText = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  ServerClientLink deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = ServerClientLinkBuilder();
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

