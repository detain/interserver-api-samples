<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

class BackupOrderPostResponseCjParams
{
    #[DTA\Data(field: "containerTagId", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $container_tag_id = null;

    #[DTA\Data(field: "CID", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $cid = null;

    #[DTA\Data(field: "OID", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $oid = null;

    #[DTA\Data(field: "TYPE", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $type = null;

    #[DTA\Data(field: "ITEM1", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $item1 = null;

    #[DTA\Data(field: "AMT1", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $amt1 = null;

    #[DTA\Data(field: "QTY1", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "int"])]
    public int|null $qty1 = null;

    #[DTA\Data(field: "CURRENCY", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $currency = null;

}
