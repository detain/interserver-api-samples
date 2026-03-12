<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Parameters to submit to validate your backup order
 */
class BackupOrderPutRequest
{
    #[DTA\Data(field: "validateOnly", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "bool"])]
    public bool|null $validate_only = null;

    #[DTA\Data(field: "serviceType", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $service_type = null;

    #[DTA\Data(field: "coupon", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $coupon = null;

}
