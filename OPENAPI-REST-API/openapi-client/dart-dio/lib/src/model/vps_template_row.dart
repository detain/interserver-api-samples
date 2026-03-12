//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'vps_template_row.g.dart';

/// A VPS OS Template.
///
/// Properties:
/// * [templateId] 
/// * [templateType] 
/// * [templateOs] 
/// * [templateVersion] 
/// * [templateBits] 
/// * [templateFile] 
/// * [templateAvailable] 
/// * [templateName] 
/// * [templateDir] 
@BuiltValue()
abstract class VpsTemplateRow implements Built<VpsTemplateRow, VpsTemplateRowBuilder> {
  @BuiltValueField(wireName: r'template_id')
  String? get templateId;

  @BuiltValueField(wireName: r'template_type')
  String? get templateType;

  @BuiltValueField(wireName: r'template_os')
  String? get templateOs;

  @BuiltValueField(wireName: r'template_version')
  String? get templateVersion;

  @BuiltValueField(wireName: r'template_bits')
  String? get templateBits;

  @BuiltValueField(wireName: r'template_file')
  String? get templateFile;

  @BuiltValueField(wireName: r'template_available')
  String? get templateAvailable;

  @BuiltValueField(wireName: r'template_name')
  String? get templateName;

  @BuiltValueField(wireName: r'template_dir')
  String? get templateDir;

  VpsTemplateRow._();

  factory VpsTemplateRow([void updates(VpsTemplateRowBuilder b)]) = _$VpsTemplateRow;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(VpsTemplateRowBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<VpsTemplateRow> get serializer => _$VpsTemplateRowSerializer();
}

class _$VpsTemplateRowSerializer implements PrimitiveSerializer<VpsTemplateRow> {
  @override
  final Iterable<Type> types = const [VpsTemplateRow, _$VpsTemplateRow];

  @override
  final String wireName = r'VpsTemplateRow';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    VpsTemplateRow object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.templateId != null) {
      yield r'template_id';
      yield serializers.serialize(
        object.templateId,
        specifiedType: const FullType(String),
      );
    }
    if (object.templateType != null) {
      yield r'template_type';
      yield serializers.serialize(
        object.templateType,
        specifiedType: const FullType(String),
      );
    }
    if (object.templateOs != null) {
      yield r'template_os';
      yield serializers.serialize(
        object.templateOs,
        specifiedType: const FullType(String),
      );
    }
    if (object.templateVersion != null) {
      yield r'template_version';
      yield serializers.serialize(
        object.templateVersion,
        specifiedType: const FullType(String),
      );
    }
    if (object.templateBits != null) {
      yield r'template_bits';
      yield serializers.serialize(
        object.templateBits,
        specifiedType: const FullType(String),
      );
    }
    if (object.templateFile != null) {
      yield r'template_file';
      yield serializers.serialize(
        object.templateFile,
        specifiedType: const FullType(String),
      );
    }
    if (object.templateAvailable != null) {
      yield r'template_available';
      yield serializers.serialize(
        object.templateAvailable,
        specifiedType: const FullType(String),
      );
    }
    if (object.templateName != null) {
      yield r'template_name';
      yield serializers.serialize(
        object.templateName,
        specifiedType: const FullType(String),
      );
    }
    if (object.templateDir != null) {
      yield r'template_dir';
      yield serializers.serialize(
        object.templateDir,
        specifiedType: const FullType(String),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    VpsTemplateRow object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required VpsTemplateRowBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'template_id':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.templateId = valueDes;
          break;
        case r'template_type':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.templateType = valueDes;
          break;
        case r'template_os':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.templateOs = valueDes;
          break;
        case r'template_version':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.templateVersion = valueDes;
          break;
        case r'template_bits':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.templateBits = valueDes;
          break;
        case r'template_file':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.templateFile = valueDes;
          break;
        case r'template_available':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.templateAvailable = valueDes;
          break;
        case r'template_name':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.templateName = valueDes;
          break;
        case r'template_dir':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.templateDir = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  VpsTemplateRow deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = VpsTemplateRowBuilder();
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

