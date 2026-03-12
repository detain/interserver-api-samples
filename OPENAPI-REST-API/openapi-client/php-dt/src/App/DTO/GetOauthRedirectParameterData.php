<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Parameters for getOauthRedirect
 */
class GetOauthRedirectParameterData
{
    /**
     * The OAuth provider name (e.g. &#x60;Google&#x60;).
     */
    #[DTA\Data(subset: "query", field: "provider")]
    #[DTA\Strategy("QueryStringScalar", ["type" => "string"], "query")]
    #[DTA\Validator("QueryStringScalar", ["type" => "string"], subset: "query")]
    public string|null $provider = null;

}
