<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Provisioning status data for a pending domain order.
 */
class DomainProvProcessPending
{
    #[DTA\Data(field: "_OPS_version", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $_ops_version = null;

    #[DTA\Data(field: "response_text", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $response_text = null;

    #[DTA\Data(field: "protocol", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $protocol = null;

    #[DTA\Data(field: "response_code", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $response_code = null;

    #[DTA\Data(field: "action", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $action = null;

    #[DTA\Data(field: "object", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $object = null;

    #[DTA\Data(field: "is_success", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $is_success = null;

    #[DTA\Data(field: "attributes", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\DomainProvProcessPendingAttributes::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\DomainProvProcessPendingAttributes::class])]
    public \App\DTO\DomainProvProcessPendingAttributes|null $attributes = null;

}
