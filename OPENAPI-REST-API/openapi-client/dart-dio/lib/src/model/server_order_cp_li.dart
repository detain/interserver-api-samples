//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:openapi/src/model/server_order_control_panel.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'server_order_cp_li.g.dart';

/// Control Panel options for the server order.
///
/// Properties:
/// * [n9] 
@BuiltValue()
abstract class ServerOrderCpLi implements Built<ServerOrderCpLi, ServerOrderCpLiBuilder> {
  @BuiltValueField(wireName: r'9')
  ServerOrderControlPanel? get n9;

  ServerOrderCpLi._();

  factory ServerOrderCpLi([void updates(ServerOrderCpLiBuilder b)]) = _$ServerOrderCpLi;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(ServerOrderCpLiBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<ServerOrderCpLi> get serializer => _$ServerOrderCpLiSerializer();
}

class _$ServerOrderCpLiSerializer implements PrimitiveSerializer<ServerOrderCpLi> {
  @override
  final Iterable<Type> types = const [ServerOrderCpLi, _$ServerOrderCpLi];

  @override
  final String wireName = r'ServerOrderCpLi';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    ServerOrderCpLi object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.n9 != null) {
      yield r'9';
      yield serializers.serialize(
        object.n9,
        specifiedType: const FullType(ServerOrderControlPanel),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    ServerOrderCpLi object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required ServerOrderCpLiBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'9':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(ServerOrderControlPanel),
          ) as ServerOrderControlPanel;
          result.n9.replace(valueDes);
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  ServerOrderCpLi deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = ServerOrderCpLiBuilder();
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

