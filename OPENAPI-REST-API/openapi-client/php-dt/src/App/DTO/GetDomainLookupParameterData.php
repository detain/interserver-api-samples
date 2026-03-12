<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Parameters for getDomainLookup
 */
class GetDomainLookupParameterData
{
    /**
     * The full domain name to look up (for example &#x60;example.com&#x60;).
     */
    #[DTA\Data(subset: "path", field: "name")]
    #[DTA\Strategy("QueryStringScalar", ["type" => "string"], "path")]
    #[DTA\Validator("QueryStringScalar", ["type" => "string"], subset: "path")]
    public string|null $name = null;

}
