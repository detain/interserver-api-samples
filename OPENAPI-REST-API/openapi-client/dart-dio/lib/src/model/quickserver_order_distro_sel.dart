//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:openapi/src/model/quickserver_order_distro_sel_ubuntu.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'quickserver_order_distro_sel.g.dart';

/// Distribution selection.
///
/// Properties:
/// * [ubuntu] 
@BuiltValue()
abstract class QuickserverOrderDistroSel implements Built<QuickserverOrderDistroSel, QuickserverOrderDistroSelBuilder> {
  @BuiltValueField(wireName: r'Ubuntu')
  QuickserverOrderDistroSelUbuntu? get ubuntu;

  QuickserverOrderDistroSel._();

  factory QuickserverOrderDistroSel([void updates(QuickserverOrderDistroSelBuilder b)]) = _$QuickserverOrderDistroSel;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(QuickserverOrderDistroSelBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<QuickserverOrderDistroSel> get serializer => _$QuickserverOrderDistroSelSerializer();
}

class _$QuickserverOrderDistroSelSerializer implements PrimitiveSerializer<QuickserverOrderDistroSel> {
  @override
  final Iterable<Type> types = const [QuickserverOrderDistroSel, _$QuickserverOrderDistroSel];

  @override
  final String wireName = r'QuickserverOrderDistroSel';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    QuickserverOrderDistroSel object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.ubuntu != null) {
      yield r'Ubuntu';
      yield serializers.serialize(
        object.ubuntu,
        specifiedType: const FullType(QuickserverOrderDistroSelUbuntu),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    QuickserverOrderDistroSel object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required QuickserverOrderDistroSelBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'Ubuntu':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(QuickserverOrderDistroSelUbuntu),
          ) as QuickserverOrderDistroSelUbuntu;
          result.ubuntu.replace(valueDes);
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  QuickserverOrderDistroSel deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = QuickserverOrderDistroSelBuilder();
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

