<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * A single row in the QuickServer IP information table.
 */
class QuickserverIpTableRow
{
    /**
     * Description
     */
    #[DTA\Data(field: "desc", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $desc = null;

    /**
     * Value
     */
    #[DTA\Data(field: "value", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $value = null;

}
