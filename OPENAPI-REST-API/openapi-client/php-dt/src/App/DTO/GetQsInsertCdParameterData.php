<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Parameters for getQsInsertCd
 */
class GetQsInsertCdParameterData
{
    /**
     * QuickServer ID number
     */
    #[DTA\Data(subset: "path", field: "id")]
    #[DTA\Strategy("QueryStringScalar", ["type" => "int"], "path")]
    #[DTA\Validator("QueryStringScalar", ["type" => "int"], subset: "path")]
    public int|null $id = null;

}
