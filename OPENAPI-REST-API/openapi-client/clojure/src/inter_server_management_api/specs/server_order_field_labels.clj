(ns inter-server-management-api.specs.server-order-field-labels
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [inter-server-management-api.specs.server-order-field-label :refer :all]
            [inter-server-management-api.specs.server-order-field-label :refer :all]
            [inter-server-management-api.specs.server-order-field-label :refer :all]
            [inter-server-management-api.specs.server-order-field-label :refer :all]
            [inter-server-management-api.specs.server-order-field-label :refer :all]
            [inter-server-management-api.specs.server-order-field-label :refer :all]
            [inter-server-management-api.specs.server-order-field-label :refer :all]
            )
  (:import (java.io File)))


(def server-order-field-labels-data
  {
   (ds/opt :bandwidth) server-order-field-label-spec
   (ds/opt :ips) server-order-field-label-spec
   (ds/opt :os) server-order-field-label-spec
   (ds/opt :cp) server-order-field-label-spec
   (ds/opt :raid) server-order-field-label-spec
   (ds/opt :memory) server-order-field-label-spec
   (ds/opt :hd) server-order-field-label-spec
   })

(def server-order-field-labels-spec
  (ds/spec
    {:name ::server-order-field-labels
     :spec server-order-field-labels-data}))
