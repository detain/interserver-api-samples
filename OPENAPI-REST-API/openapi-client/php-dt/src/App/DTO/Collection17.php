<?php
declare(strict_types=1);

namespace App\DTO;

use Articus\DataTransfer\PhpAttribute as DTA;

#[DTA\Strategy("ObjectMap", ["type" => \App\DTO\ChargeInvoiceRowsInvoicesValuePaidInvoicesValue::class])]
#[DTA\Validator("Collection", ["validators" => [
    ["name" => "TypeCompliant", "options" => ["type" => \App\DTO\ChargeInvoiceRowsInvoicesValuePaidInvoicesValue::class]]
]])]
class Collection17 extends \ArrayObject
{
}
