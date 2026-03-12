(ns inter-server-management-api.specs.server-order
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [inter-server-management-api.specs.server-order-form-values :refer :all]
            [inter-server-management-api.specs.server-order-config-ids :refer :all]
            [inter-server-management-api.specs.server-order-field-labels :refer :all]
            [inter-server-management-api.specs.server-order-cpu-li :refer :all]
            [inter-server-management-api.specs.server-order-memory-li :refer :all]
            [inter-server-management-api.specs.server-order-bandwidth-li :refer :all]
            [inter-server-management-api.specs.server-order-ips-li :refer :all]
            [inter-server-management-api.specs.server-order-os-li :refer :all]
            [inter-server-management-api.specs.server-order-cp-li :refer :all]
            [inter-server-management-api.specs.server-order-raid :refer :all]
            )
  (:import (java.io File)))


(def server-order-data
  {
   (ds/opt :form_values) server-order-form-values-spec
   (ds/opt :config_ids) server-order-config-ids-spec
   (ds/opt :cpu) int?
   (ds/opt :field_label) server-order-field-labels-spec
   (ds/opt :cpu_li) server-order-cpu-li-spec
   (ds/opt :memory_li) server-order-memory-li-spec
   (ds/opt :bandwidth_li) server-order-bandwidth-li-spec
   (ds/opt :ips_li) server-order-ips-li-spec
   (ds/opt :os_li) server-order-os-li-spec
   (ds/opt :cp_li) server-order-cp-li-spec
   (ds/opt :raid_li) (s/coll-of server-order-raid-spec)
   })

(def server-order-spec
  (ds/spec
    {:name ::server-order
     :spec server-order-data}))
