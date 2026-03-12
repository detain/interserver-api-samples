<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

class DomainDnssecRecordsInner
{
    #[DTA\Data(field: "algorithm", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $algorithm = null;

    #[DTA\Data(field: "digest_type", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $digest_type = null;

    #[DTA\Data(field: "digest", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $digest = null;

    #[DTA\Data(field: "key_tag", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $key_tag = null;

}
