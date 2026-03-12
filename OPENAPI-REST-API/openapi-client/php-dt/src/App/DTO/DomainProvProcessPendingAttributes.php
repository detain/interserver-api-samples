<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

class DomainProvProcessPendingAttributes
{
    #[DTA\Data(field: "id", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $id = null;

    #[DTA\Data(field: "order_id", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $order_id = null;

    #[DTA\Data(field: "registration expiration date", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $registration_expiration_date = null;

    #[DTA\Data(field: "f_auto_renew", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $f_auto_renew = null;

}
