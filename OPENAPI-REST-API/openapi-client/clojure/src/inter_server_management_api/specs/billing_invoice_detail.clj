(ns inter-server-management-api.specs.billing-invoice-detail
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def billing-invoice-detail-data
  {
   })

(def billing-invoice-detail-spec
  (ds/spec
    {:name ::billing-invoice-detail
     :spec billing-invoice-detail-data}))
