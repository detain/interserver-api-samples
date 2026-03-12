<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Response from VPS order validation request
 */
class VpsOrderPutResponse
{
    #[DTA\Data(field: "continue", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "bool"])]
    public bool|null $continue = null;

    #[DTA\Data(field: "errors", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\Collection110::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\Collection110::class])]
    public \App\DTO\Collection110|null $errors = null;

    #[DTA\Data(field: "coupon_code", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $coupon_code = null;

    #[DTA\Data(field: "service_cost", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $service_cost = null;

    #[DTA\Data(field: "slice_cost", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $slice_cost = null;

    #[DTA\Data(field: "service_type", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $service_type = null;

    #[DTA\Data(field: "repeat_slice_cost", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $repeat_slice_cost = null;

    #[DTA\Data(field: "original_slice_cost", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $original_slice_cost = null;

    #[DTA\Data(field: "original_cost", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $original_cost = null;

    #[DTA\Data(field: "repeat_service_cost", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $repeat_service_cost = null;

    #[DTA\Data(field: "monthly_service_cost", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $monthly_service_cost = null;

    #[DTA\Data(field: "custid", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $custid = null;

    #[DTA\Data(field: "os", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $os = null;

    #[DTA\Data(field: "slices", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $slices = null;

    #[DTA\Data(field: "platform", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $platform = null;

    #[DTA\Data(field: "controlpanel", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $controlpanel = null;

    #[DTA\Data(field: "period", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $period = null;

    #[DTA\Data(field: "location", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $location = null;

    #[DTA\Data(field: "version", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $version = null;

    #[DTA\Data(field: "hostname", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $hostname = null;

    #[DTA\Data(field: "coupon", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $coupon = null;

    #[DTA\Data(field: "rootpass", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $rootpass = null;

}
