<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Parameters for deleteDomainDnssec
 */
class DeleteDomainDnssecParameterData
{
    /**
     * Set to &#x60;delete&#x60; to remove all DNSSEC records.
     */
    #[DTA\Data(subset: "query", field: "action")]
    #[DTA\Strategy("QueryStringScalar", ["type" => "string"], "query")]
    #[DTA\Validator("QueryStringScalar", ["type" => "string"], subset: "query")]
    public string|null $action = null;

    /**
     * The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.
     */
    #[DTA\Data(subset: "path", field: "id")]
    #[DTA\Strategy("QueryStringScalar", ["type" => "int"], "path")]
    #[DTA\Validator("QueryStringScalar", ["type" => "int"], subset: "path")]
    public int|null $id = null;

}
