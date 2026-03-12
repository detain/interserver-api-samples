(ns inter-server-management-api.specs.buy-it-now-server-order-200-response
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [inter-server-management-api.specs.buy-it-now-server-order-200-response-bandwidth-inner :refer :all]
            [inter-server-management-api.specs.buy-it-now-server-order-200-response-ips-inner :refer :all]
            [inter-server-management-api.specs.buy-it-now-server-order-200-response-os-inner :refer :all]
            [inter-server-management-api.specs.buy-it-now-server-order-200-response-cp-inner :refer :all]
            [inter-server-management-api.specs.buy-it-now-server-order-200-response-raid-inner :refer :all]
            )
  (:import (java.io File)))


(def buy-it-now-server-order-200-response-data
  {
   (ds/opt :bandwidth) (s/coll-of buy-it-now-server-order-200-response-bandwidth-inner-spec)
   (ds/opt :ips) (s/coll-of buy-it-now-server-order-200-response-ips-inner-spec)
   (ds/opt :os) (s/coll-of buy-it-now-server-order-200-response-os-inner-spec)
   (ds/opt :cp) (s/coll-of buy-it-now-server-order-200-response-cp-inner-spec)
   (ds/opt :raid) (s/coll-of buy-it-now-server-order-200-response-raid-inner-spec)
   })

(def buy-it-now-server-order-200-response-spec
  (ds/spec
    {:name ::buy-it-now-server-order-200-response
     :spec buy-it-now-server-order-200-response-data}))
