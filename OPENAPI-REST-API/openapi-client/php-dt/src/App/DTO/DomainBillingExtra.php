<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Extended billing context for a domain including registrar order details and contact info.
 */
class DomainBillingExtra
{
    #[DTA\Data(field: "order", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\DomainOrderResponse::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\DomainOrderResponse::class])]
    public \App\DTO\DomainOrderResponse|null $order = null;

    #[DTA\Data(field: "order_id", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $order_id = null;

    #[DTA\Data(field: "domain_id", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $domain_id = null;

    #[DTA\Data(field: "provProcessPending", nullable: true)]
    #[DTA\Strategy("Object", ["type" => \App\DTO\DomainProvProcessPending::class])]
    #[DTA\Validator("TypeCompliant", ["type" => \App\DTO\DomainProvProcessPending::class])]
    public \App\DTO\DomainProvProcessPending|null $prov_process_pending = null;

    #[DTA\Data(field: "email", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $email = null;

    #[DTA\Data(field: "firstname", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $firstname = null;

    #[DTA\Data(field: "lastname", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $lastname = null;

    #[DTA\Data(field: "company", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $company = null;

    #[DTA\Data(field: "address", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $address = null;

    #[DTA\Data(field: "address2", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $address2 = null;

    #[DTA\Data(field: "address3", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $address3 = null;

    #[DTA\Data(field: "city", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $city = null;

    #[DTA\Data(field: "state", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $state = null;

    #[DTA\Data(field: "zip", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $zip = null;

    #[DTA\Data(field: "country", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $country = null;

    #[DTA\Data(field: "phone", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $phone = null;

    #[DTA\Data(field: "fax", nullable: true)]
    #[DTA\Validator("Scalar", ["type" => "string"])]
    public string|null $fax = null;

}
