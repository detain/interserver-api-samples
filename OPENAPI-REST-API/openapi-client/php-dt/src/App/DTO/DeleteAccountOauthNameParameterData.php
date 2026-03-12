<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Parameters for deleteAccountOauthName
 */
class DeleteAccountOauthNameParameterData
{
    #[DTA\Data(subset: "path", field: "name")]
    #[DTA\Strategy("QueryStringScalar", ["type" => "string"], "path")]
    #[DTA\Validator("QueryStringScalar", ["type" => "string"], subset: "path")]
    public string|null $name = null;

}
