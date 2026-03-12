<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

/**
 * Parameters for getCountries
 */
class GetCountriesParameterData
{
    /**
     * Get countries by iso2 or iso3 or numcode
     */
    #[DTA\Data(subset: "query", field: "fetch_by", nullable: true)]
    #[DTA\Strategy("QueryStringScalar", ["type" => "string"], "query")]
    #[DTA\Validator("QueryStringScalar", ["type" => "string"], subset: "query")]
    public string|null $fetch_by = null;

}
