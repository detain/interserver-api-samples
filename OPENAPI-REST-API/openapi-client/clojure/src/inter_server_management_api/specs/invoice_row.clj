(ns inter-server-management-api.specs.invoice-row
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def invoice-row-data
  {
   })

(def invoice-row-spec
  (ds/spec
    {:name ::invoice-row
     :spec invoice-row-data}))
