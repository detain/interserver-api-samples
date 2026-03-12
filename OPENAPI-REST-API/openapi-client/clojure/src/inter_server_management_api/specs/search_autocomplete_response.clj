(ns inter-server-management-api.specs.search-autocomplete-response
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def search-autocomplete-response-data
  {
   })

(def search-autocomplete-response-spec
  (ds/spec
    {:name ::search-autocomplete-response
     :spec search-autocomplete-response-data}))
