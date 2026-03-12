<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Backup Order Placement Response
 */
class BackupOrderPostResponse
{
    #[DTA\Data(field: "continue", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "bool"])]
    public bool|null $continue = null;

    #[DTA\Data(field: "errors", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\Collection11::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\Collection11::class])]
    public \App\DTO\Collection11|null $errors = null;

    #[DTA\Data(field: "total_cost", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $total_cost = null;

    #[DTA\Data(field: "iid", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $iid = null;

    #[DTA\Data(field: "iids", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\Collection12::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\Collection12::class])]
    public \App\DTO\Collection12|null $iids = null;

    #[DTA\Data(field: "real_iids", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\Collection13::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\Collection13::class])]
    public \App\DTO\Collection13|null $real_iids = null;

    #[DTA\Data(field: "serviceId", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $service_id = null;

    #[DTA\Data(field: "invoice_description", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $invoice_description = null;

    #[DTA\Data(field: "cj_params", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\BackupOrderPostResponseCjParams::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\BackupOrderPostResponseCjParams::class])]
    public \App\DTO\BackupOrderPostResponseCjParams|null $cj_params = null;

}
