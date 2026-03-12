(ns inter-server-management-api.specs.invoice
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def invoice-data
  {
   (ds/opt :id) int?
   })

(def invoice-spec
  (ds/spec
    {:name ::invoice
     :spec invoice-data}))
