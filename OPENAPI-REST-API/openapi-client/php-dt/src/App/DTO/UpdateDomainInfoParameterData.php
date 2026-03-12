<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Parameters for updateDomainInfo
 */
class UpdateDomainInfoParameterData
{
    /**
     * The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.
     */
    #[DTA\Data(subset: "path", field: "id")]
    #[DTA\Strategy("QueryStringScalar", ["type" => "string"], "path")]
    #[DTA\Validator("QueryStringScalar", ["type" => "string"], subset: "path")]
    public string|null $id = null;

}
