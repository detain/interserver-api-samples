<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Parameters for getDomainOrderSearchResults
 */
class GetDomainOrderSearchResultsParameterData
{
    /**
     * The fully qualified domain name to look up (e.g. &#x60;example.com&#x60;).
     */
    #[DTA\Data(subset: "path", field: "domain")]
    #[DTA\Strategy("QueryStringScalar", ["type" => "string"], "path")]
    #[DTA\Validator("QueryStringScalar", ["type" => "string"], subset: "path")]
    public string|null $domain = null;

}
