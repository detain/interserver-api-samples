//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:openapi/src/model/quickserver_order_server_details.dart';
import 'package:openapi/src/model/quickserver_order_templates.dart';
import 'package:openapi/src/model/quickserver_order_version.dart';
import 'package:openapi/src/model/quickserver_order_distro_sel.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'quickserver_order.g.dart';

/// Available QuickServer options and OS templates for ordering a new QuickServer.
///
/// Properties:
/// * [qsId] - Quickserver ID.
/// * [serverDetails] 
/// * [templates] 
/// * [version] 
/// * [distroSel] 
@BuiltValue()
abstract class QuickserverOrder implements Built<QuickserverOrder, QuickserverOrderBuilder> {
  /// Quickserver ID.
  @BuiltValueField(wireName: r'qs_id')
  String? get qsId;

  @BuiltValueField(wireName: r'server_details')
  QuickserverOrderServerDetails? get serverDetails;

  @BuiltValueField(wireName: r'templates')
  QuickserverOrderTemplates? get templates;

  @BuiltValueField(wireName: r'version')
  QuickserverOrderVersion? get version;

  @BuiltValueField(wireName: r'distro_sel')
  QuickserverOrderDistroSel? get distroSel;

  QuickserverOrder._();

  factory QuickserverOrder([void updates(QuickserverOrderBuilder b)]) = _$QuickserverOrder;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(QuickserverOrderBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<QuickserverOrder> get serializer => _$QuickserverOrderSerializer();
}

class _$QuickserverOrderSerializer implements PrimitiveSerializer<QuickserverOrder> {
  @override
  final Iterable<Type> types = const [QuickserverOrder, _$QuickserverOrder];

  @override
  final String wireName = r'QuickserverOrder';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    QuickserverOrder object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.qsId != null) {
      yield r'qs_id';
      yield serializers.serialize(
        object.qsId,
        specifiedType: const FullType(String),
      );
    }
    if (object.serverDetails != null) {
      yield r'server_details';
      yield serializers.serialize(
        object.serverDetails,
        specifiedType: const FullType(QuickserverOrderServerDetails),
      );
    }
    if (object.templates != null) {
      yield r'templates';
      yield serializers.serialize(
        object.templates,
        specifiedType: const FullType(QuickserverOrderTemplates),
      );
    }
    if (object.version != null) {
      yield r'version';
      yield serializers.serialize(
        object.version,
        specifiedType: const FullType(QuickserverOrderVersion),
      );
    }
    if (object.distroSel != null) {
      yield r'distro_sel';
      yield serializers.serialize(
        object.distroSel,
        specifiedType: const FullType(QuickserverOrderDistroSel),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    QuickserverOrder object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required QuickserverOrderBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'qs_id':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.qsId = valueDes;
          break;
        case r'server_details':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(QuickserverOrderServerDetails),
          ) as QuickserverOrderServerDetails;
          result.serverDetails.replace(valueDes);
          break;
        case r'templates':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(QuickserverOrderTemplates),
          ) as QuickserverOrderTemplates;
          result.templates.replace(valueDes);
          break;
        case r'version':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(QuickserverOrderVersion),
          ) as QuickserverOrderVersion;
          result.version.replace(valueDes);
          break;
        case r'distro_sel':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(QuickserverOrderDistroSel),
          ) as QuickserverOrderDistroSel;
          result.distroSel.replace(valueDes);
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  QuickserverOrder deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = QuickserverOrderBuilder();
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

