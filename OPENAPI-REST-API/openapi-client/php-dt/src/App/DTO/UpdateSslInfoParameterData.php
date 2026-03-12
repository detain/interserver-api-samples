<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Parameters for updateSslInfo
 */
class UpdateSslInfoParameterData
{
    /**
     * SSL certificate ID number.
     */
    #[DTA\Data(subset: "path", field: "id")]
    #[DTA\Strategy("QueryStringScalar", ["type" => "string"], "path")]
    #[DTA\Validator("QueryStringScalar", ["type" => "string"], subset: "path")]
    public string|null $id = null;

}
