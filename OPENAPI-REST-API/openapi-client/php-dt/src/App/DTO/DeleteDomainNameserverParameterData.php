<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Parameters for deleteDomainNameserver
 */
class DeleteDomainNameserverParameterData
{
    /**
     * The index of the registered nameserver from the registered nameservers list to delete.
     */
    #[DTA\Data(subset: "query", field: "index")]
    #[DTA\Strategy("QueryStringScalar", ["type" => "int"], "query")]
    #[DTA\Validator("QueryStringScalar", ["type" => "int"], subset: "query")]
    public int|null $index = null;

    /**
     * The domain service ID. Use &#x60;domain_id&#x60; from &#x60;GET /domains&#x60;.
     */
    #[DTA\Data(subset: "path", field: "id")]
    #[DTA\Strategy("QueryStringScalar", ["type" => "int"], "path")]
    #[DTA\Validator("QueryStringScalar", ["type" => "int"], subset: "path")]
    public int|null $id = null;

}
