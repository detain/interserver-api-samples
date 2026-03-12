//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_collection/built_collection.dart';
import 'package:openapi/src/model/backup_order_post_response_cj_params.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'backup_order_post_response.g.dart';

/// Backup Order Placement Response
///
/// Properties:
/// * [continue_] 
/// * [errors] 
/// * [totalCost] 
/// * [iid] 
/// * [iids] 
/// * [realIids] 
/// * [serviceId] 
/// * [invoiceDescription] 
/// * [cjParams] 
@BuiltValue()
abstract class BackupOrderPostResponse implements Built<BackupOrderPostResponse, BackupOrderPostResponseBuilder> {
  @BuiltValueField(wireName: r'continue')
  bool? get continue_;

  @BuiltValueField(wireName: r'errors')
  BuiltList<String>? get errors;

  @BuiltValueField(wireName: r'total_cost')
  String? get totalCost;

  @BuiltValueField(wireName: r'iid')
  String? get iid;

  @BuiltValueField(wireName: r'iids')
  BuiltList<String>? get iids;

  @BuiltValueField(wireName: r'real_iids')
  BuiltList<String>? get realIids;

  @BuiltValueField(wireName: r'serviceId')
  int? get serviceId;

  @BuiltValueField(wireName: r'invoice_description')
  String? get invoiceDescription;

  @BuiltValueField(wireName: r'cj_params')
  BackupOrderPostResponseCjParams? get cjParams;

  BackupOrderPostResponse._();

  factory BackupOrderPostResponse([void updates(BackupOrderPostResponseBuilder b)]) = _$BackupOrderPostResponse;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(BackupOrderPostResponseBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<BackupOrderPostResponse> get serializer => _$BackupOrderPostResponseSerializer();
}

class _$BackupOrderPostResponseSerializer implements PrimitiveSerializer<BackupOrderPostResponse> {
  @override
  final Iterable<Type> types = const [BackupOrderPostResponse, _$BackupOrderPostResponse];

  @override
  final String wireName = r'BackupOrderPostResponse';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    BackupOrderPostResponse object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.continue_ != null) {
      yield r'continue';
      yield serializers.serialize(
        object.continue_,
        specifiedType: const FullType(bool),
      );
    }
    if (object.errors != null) {
      yield r'errors';
      yield serializers.serialize(
        object.errors,
        specifiedType: const FullType(BuiltList, [FullType(String)]),
      );
    }
    if (object.totalCost != null) {
      yield r'total_cost';
      yield serializers.serialize(
        object.totalCost,
        specifiedType: const FullType(String),
      );
    }
    if (object.iid != null) {
      yield r'iid';
      yield serializers.serialize(
        object.iid,
        specifiedType: const FullType(String),
      );
    }
    if (object.iids != null) {
      yield r'iids';
      yield serializers.serialize(
        object.iids,
        specifiedType: const FullType(BuiltList, [FullType(String)]),
      );
    }
    if (object.realIids != null) {
      yield r'real_iids';
      yield serializers.serialize(
        object.realIids,
        specifiedType: const FullType(BuiltList, [FullType(String)]),
      );
    }
    if (object.serviceId != null) {
      yield r'serviceId';
      yield serializers.serialize(
        object.serviceId,
        specifiedType: const FullType(int),
      );
    }
    if (object.invoiceDescription != null) {
      yield r'invoice_description';
      yield serializers.serialize(
        object.invoiceDescription,
        specifiedType: const FullType(String),
      );
    }
    if (object.cjParams != null) {
      yield r'cj_params';
      yield serializers.serialize(
        object.cjParams,
        specifiedType: const FullType(BackupOrderPostResponseCjParams),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    BackupOrderPostResponse object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required BackupOrderPostResponseBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'continue':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(bool),
          ) as bool;
          result.continue_ = valueDes;
          break;
        case r'errors':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(BuiltList, [FullType(String)]),
          ) as BuiltList<String>;
          result.errors.replace(valueDes);
          break;
        case r'total_cost':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.totalCost = valueDes;
          break;
        case r'iid':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.iid = valueDes;
          break;
        case r'iids':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(BuiltList, [FullType(String)]),
          ) as BuiltList<String>;
          result.iids.replace(valueDes);
          break;
        case r'real_iids':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(BuiltList, [FullType(String)]),
          ) as BuiltList<String>;
          result.realIids.replace(valueDes);
          break;
        case r'serviceId':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.serviceId = valueDes;
          break;
        case r'invoice_description':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.invoiceDescription = valueDes;
          break;
        case r'cj_params':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(BackupOrderPostResponseCjParams),
          ) as BackupOrderPostResponseCjParams;
          result.cjParams.replace(valueDes);
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  BackupOrderPostResponse deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = BackupOrderPostResponseBuilder();
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

