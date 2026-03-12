<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

class DomainOrderResponseAttributes
{
    /**
     * Registrar order ID.
     */
    #[DTA\Data(field: "id", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $id = null;

    /**
     * Administrative contact email provided for the order.
     */
    #[DTA\Data(field: "admin_email", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $admin_email = null;

}
