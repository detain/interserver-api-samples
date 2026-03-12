//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'quickserver_order_distro_sel_ubuntu.g.dart';

/// QuickserverOrderDistroSelUbuntu
///
/// Properties:
/// * [ubuntu] - Selected distribution for Ubuntu.
@BuiltValue()
abstract class QuickserverOrderDistroSelUbuntu implements Built<QuickserverOrderDistroSelUbuntu, QuickserverOrderDistroSelUbuntuBuilder> {
  /// Selected distribution for Ubuntu.
  @BuiltValueField(wireName: r'Ubuntu')
  String? get ubuntu;

  QuickserverOrderDistroSelUbuntu._();

  factory QuickserverOrderDistroSelUbuntu([void updates(QuickserverOrderDistroSelUbuntuBuilder b)]) = _$QuickserverOrderDistroSelUbuntu;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(QuickserverOrderDistroSelUbuntuBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<QuickserverOrderDistroSelUbuntu> get serializer => _$QuickserverOrderDistroSelUbuntuSerializer();
}

class _$QuickserverOrderDistroSelUbuntuSerializer implements PrimitiveSerializer<QuickserverOrderDistroSelUbuntu> {
  @override
  final Iterable<Type> types = const [QuickserverOrderDistroSelUbuntu, _$QuickserverOrderDistroSelUbuntu];

  @override
  final String wireName = r'QuickserverOrderDistroSelUbuntu';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    QuickserverOrderDistroSelUbuntu object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.ubuntu != null) {
      yield r'Ubuntu';
      yield serializers.serialize(
        object.ubuntu,
        specifiedType: const FullType(String),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    QuickserverOrderDistroSelUbuntu object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required QuickserverOrderDistroSelUbuntuBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'Ubuntu':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.ubuntu = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  QuickserverOrderDistroSelUbuntu deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = QuickserverOrderDistroSelUbuntuBuilder();
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

