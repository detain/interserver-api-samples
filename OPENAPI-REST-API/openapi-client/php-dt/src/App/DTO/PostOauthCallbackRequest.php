<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

class PostOauthCallbackRequest
{
    /**
     * The OAuth provider name (e.g. &#x60;Google&#x60;).
     */
    #[DTA\Data(field: "provider", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $provider = null;

}
