<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Parameters for getDomainOrderFields
 */
class GetDomainOrderFieldsParameterData
{
    /**
     * The fully qualified domain name (e.g. &#x60;example.com&#x60;).
     */
    #[DTA\Data(subset: "path", field: "domain")]
    #[DTA\Strategy("QueryStringScalar", ["type" => "string"], "path")]
    #[DTA\Validator("QueryStringScalar", ["type" => "string"], subset: "path")]
    public string|null $domain = null;

    /**
     * The registration type. Common values include &#x60;register&#x60; for new registrations and &#x60;transfer&#x60; for inbound transfers.
     */
    #[DTA\Data(subset: "path", field: "regType")]
    #[DTA\Strategy("QueryStringScalar", ["type" => "string"], "path")]
    #[DTA\Validator("QueryStringScalar", ["type" => "string"], subset: "path")]
    public string|null $reg_type = null;

}
