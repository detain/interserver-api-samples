//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'server_order_field_label.g.dart';

/// A display label for a field in the server order form.
///
/// Properties:
/// * [name] - Name of the field label.
/// * [active] - Active status of the field label.
@BuiltValue()
abstract class ServerOrderFieldLabel implements Built<ServerOrderFieldLabel, ServerOrderFieldLabelBuilder> {
  /// Name of the field label.
  @BuiltValueField(wireName: r'name')
  String? get name;

  /// Active status of the field label.
  @BuiltValueField(wireName: r'active')
  int? get active;

  ServerOrderFieldLabel._();

  factory ServerOrderFieldLabel([void updates(ServerOrderFieldLabelBuilder b)]) = _$ServerOrderFieldLabel;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(ServerOrderFieldLabelBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<ServerOrderFieldLabel> get serializer => _$ServerOrderFieldLabelSerializer();
}

class _$ServerOrderFieldLabelSerializer implements PrimitiveSerializer<ServerOrderFieldLabel> {
  @override
  final Iterable<Type> types = const [ServerOrderFieldLabel, _$ServerOrderFieldLabel];

  @override
  final String wireName = r'ServerOrderFieldLabel';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    ServerOrderFieldLabel object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.name != null) {
      yield r'name';
      yield serializers.serialize(
        object.name,
        specifiedType: const FullType(String),
      );
    }
    if (object.active != null) {
      yield r'active';
      yield serializers.serialize(
        object.active,
        specifiedType: const FullType(int),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    ServerOrderFieldLabel object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required ServerOrderFieldLabelBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'name':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.name = valueDes;
          break;
        case r'active':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.active = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  ServerOrderFieldLabel deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = ServerOrderFieldLabelBuilder();
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

