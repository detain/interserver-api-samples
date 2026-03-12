<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Response from a website login request.
 */
class WebsiteLoginResponse
{
    #[DTA\Data(field: "type", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $type = null;

    #[DTA\Data(field: "location", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $location = null;

}
