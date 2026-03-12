(ns inter-server-management-api.specs.billing-invoice-list
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [inter-server-management-api.specs. :refer :all]
            )
  (:import (java.io File)))


(def billing-invoice-list-data
  {
   (ds/opt :rows) (s/coll-of any?)
   (ds/opt :summary) any?
   })

(def billing-invoice-list-spec
  (ds/spec
    {:name ::billing-invoice-list
     :spec billing-invoice-list-data}))
