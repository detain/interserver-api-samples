<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Backup Order validation response
 */
class BackupOrderPutResponse
{
    #[DTA\Data(field: "continue", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "bool"])]
    public bool|null $continue = null;

    #[DTA\Data(field: "errors", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\Collection10::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\Collection10::class])]
    public \App\DTO\Collection10|null $errors = null;

    #[DTA\Data(field: "serviceType", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $service_type = null;

    #[DTA\Data(field: "serviceCost", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $service_cost = null;

    #[DTA\Data(field: "originalCost", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $original_cost = null;

    #[DTA\Data(field: "repeatServiceCost", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $repeat_service_cost = null;

    #[DTA\Data(field: "hostname", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $hostname = null;

    #[DTA\Data(field: "password", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $password = null;

    #[DTA\Data(field: "coupon", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $coupon = null;

    #[DTA\Data(field: "couponCode", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $coupon_code = null;

}
